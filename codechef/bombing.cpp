#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <set>
#include <utility>
#include <vector>
using namespace std;

#define LSB(i) ((i) & -(i))

struct Command {
  char c;
  int x, y;
};

vector<Command> read_input() {
  int n, m;
  scanf("%d%d", &n, &m);
  vector<Command> cmds(m);
  for (auto& cmd : cmds) {
    scanf(" %c%d", &cmd.c, &cmd.x);
    if (cmd.c != 'B') {
      scanf("%d", &cmd.y);
    }
  }
  return cmds;
}

vector<int> compute_indices(const vector<Command>& cmds) {
  set<int> indices;
  vector<pair<int, int>> segments;
  for (auto& cmd : cmds) {
    if (cmd.c == 'P') {
      segments.push_back(make_pair(cmd.x, cmd.y));
      indices.insert(cmd.x);
      indices.insert(cmd.y + 1);
    } else if (cmd.c == 'M') {
      segments[cmd.x - 1].first += cmd.y;
      segments[cmd.x - 1].second += cmd.y;
      indices.insert(segments[cmd.x - 1].first);
      indices.insert(segments[cmd.x - 1].second + 1);
    } else {
      indices.insert(cmd.x);
    }
  }
  return vector<int>(indices.begin(), indices.end());
}

int sum(const vector<int>& fenwick_tree, int i) {
  int res = 0;
  while (i > 0) {
    res += fenwick_tree[i];
    i -= LSB(i);
  }
  return res;
}

void add(vector<int>& fenwick_tree, int i, int k) {
  while (i < int(fenwick_tree.size())) {
    fenwick_tree[i] += k;
    i += LSB(i);
  }
}

int get_index(const vector<int>& indices, int k) {
  auto it = lower_bound(indices.begin(), indices.end(), k);
  assert(*it == k);
  return it - indices.begin();
}

int main() {
  auto cmds = read_input();
  auto indices = compute_indices(cmds);
  vector<int> fenwick_tree(indices.size() + 1, 0);
  vector<pair<int, int>> segments;
  for (auto& cmd : cmds) {
    if (cmd.c == 'P') {
      segments.push_back(make_pair(cmd.x, cmd.y));
      add(fenwick_tree, get_index(indices, cmd.x) + 1, 1);
      add(fenwick_tree, get_index(indices, cmd.y + 1) + 1, -1);
    } else if (cmd.c == 'M') {
      add(fenwick_tree, get_index(indices, segments[cmd.x - 1].first) + 1, -1);
      add(fenwick_tree, get_index(indices, segments[cmd.x - 1].second + 1) + 1, 1);
      segments[cmd.x - 1].first += cmd.y;
      segments[cmd.x - 1].second += cmd.y;
      add(fenwick_tree, get_index(indices, segments[cmd.x - 1].first) + 1, 1);
      add(fenwick_tree, get_index(indices, segments[cmd.x - 1].second + 1) + 1, -1);
    } else {
      printf("%d\n", sum(fenwick_tree, get_index(indices, cmd.x) + 1));
    }
  }
}
