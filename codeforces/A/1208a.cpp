#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    int a,b,n, ans;
    while(t--) {
        cin >> a >> b >> n;
 
        if (n % 3 == 0) {
            ans = a;
        } else if (n % 3 == 1) {
            ans = b;
        } else {
            ans = a ^ b;
        }
 
        cout << ans << "\n";
    }
}
