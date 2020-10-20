#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, size, book;
    int first, total, zero;

    cin >> n;

    while(n--)
    {
        cin >> size;

        first = total = zero = 0;

        while(size--)
        {
            cin >> book;

            if(first == 0 && book == 1)
                first = 1;
            else if(first == 1 && book == 0)
                zero++;
            else if(first == 1 && book == 1)
            {
                total += zero;
                zero = 0;
            }
        }

        cout << total << endl;
    }

    return 0;
}
