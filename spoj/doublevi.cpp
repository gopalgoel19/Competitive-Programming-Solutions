#include <algorithm>
#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

typedef pair<int, int> P;
typedef vector<P> Vp;
typedef vector<Vp> Mp;
typedef vector<Mp> MMp;

bool in(P p, const Vp& v) {
  return find(v.begin(), v.end(), p) != v.end();
}

Mp candidates(const Vp& symbol) {
  Mp res;
  int n = symbol.size();
  for (int i = 0; i < n; ++i) {
    res.push_back(Vp(1, symbol[i]));
  }
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      Vp tmp;
      tmp.push_back(symbol[i]);
      tmp.push_back(symbol[j]);
      res.push_back(tmp);
    }
  }
  return res;
}

int main() {
  int cas = 1;
  int n, r, c;
  while (cin >> n >> r >> c && n != 0) {
    cout << "Test " << cas++ << endl;
    Mp symbols(n);
    for (int i = 0; i < r; ++i) {
      for (int k = 0; k < n; ++k) {
        for (int j = 0; j < c; ++j) {
          char x;
          cin >> x;
          if (x == 'o') {
            symbols[k].push_back(make_pair(i, j));
          }
        }
      }
    }
    MMp symbol_candidates(n);
    map<Vp, int> cardinality;
    for (int i = 0; i < n; ++i) {
      symbol_candidates[i] = candidates(symbols[i]);
      int m = symbol_candidates[i].size();
      for (int j = 0; j < m; ++j) {
        ++cardinality[symbol_candidates[i][j]];
      }
    }
    Mp choice(n);
    for (int i = 0; i < n; ++i) {
      int m = symbol_candidates[i].size();
      for (int j = 0; j < m; ++j) {
        if (cardinality[symbol_candidates[i][j]] == 1) {
          choice[i] = symbol_candidates[i][j];
          break;
        }
      }
    }
    bool valid = true;
    for (int i = 0; i < n; ++i) {
      if (choice[i].size() == 0) {
        valid = false;
        break;
      }
    }
    if (valid) {
      for (int i = 0; i < r; ++i) {
        for (int k = 0; k < n; ++k) {
          if (k != 0) cout << " ";
          for (int j = 0; j < c; ++j) {
            P p(i, j);
            if (in(p, symbols[k])) {
              if (in(p, choice[k])) {
                cout << "#";
              } else {
                cout << "o";
              }
            } else {
              cout << ".";
            }
          }
        }
        cout << endl;
      }
    } else {
      cout << "impossible" << endl;
    }
  }
}
