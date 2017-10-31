#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int p;
    vector<int> a(101,0);
    set<int> s;
    for (int i = 0; i < n; ++i)
    {
        cin >> p;
        a[p]++;
        s.insert(p);
    }

    vector<int> sv(s.begin(), s.end());
  
    if (sv.size() == 2 && a[sv[0]] == a[sv[1]]) {
        cout << "YES" << "\n";
        cout << sv[0] << " " << sv[1] << "\n";
    } else {
        cout << "NO" << "\n";
    }
    return 0;
}
