#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int sum(int x)
{
    int t = 0;

    x++;

    while(x--)
    {
        t += x;
    }

    return t;
}

int main () {

    int n;
    string str;

    cin >> n;

    while(n--)
    {
        cin >> str;

        cout << ((str.at(0) - '1') * 10) + ( sum( str.size() ) ) << endl;
    }

    return 0;
}
