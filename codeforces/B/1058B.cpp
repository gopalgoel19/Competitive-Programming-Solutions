#include <iostream>
 
using namespace std;
 
int main() {
    int n,d,m;
    cin >> n >> d >> m;
 
    while (m > 0) {
        int x,y;
        cin >> x >> y;
        if((x+y>=d) && (x+y<=2*n-d) && (x-y<=d) && (y-x<=d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        m--;
    }
 
    return 0;
}