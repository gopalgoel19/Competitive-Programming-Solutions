#include <bits/stdc++.h>
 
using namespace std;
int n;
char s[200005];
stack<char> stk;
 
int main() {
    cin >> n;
 
    for (int i=0;i<n;i++) {
        cin >> s[i];
        if (s[i] == '(') {
            stk.push(s[i]);
        } else {
            if (!stk.empty() && stk.top() == '(') {
                stk.pop();
            } else {
                stk.push(s[i]);
            }
        }
    }
 
    if (stk.empty()) {
        cout << "Yes\n";
    } else if (stk.size() == 2) {
        char first = stk.top();
        stk.pop();
        char last = stk.top();
        cout << (first != last ? "Yes" : "No");
    } else {
        cout << "No\n";
    }
 
    return 0;
}
