/*
Link : https://www.codechef.com/NOV19B/problems/CAMC
Author : jignesh1604
College : SVNIT
*/

#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#define pb push_back
#define sz size()
#define ff first
#define ss second
#define ll long long int
#define ld long double
#define bp __builtin_popcountll
#define FOR(i,a,b) for(i=a;i<b;i++)
#define ROR(i,a,b) for(i=a;i>b;i--)
#define FORE(i,a,b) for(i=a;i<=b;i++)
#define RORE(i,a,b) for(i=a;i>=b;i--)
#define pii pair<int,int>
#define pll pair<ll,ll>
const int M=1e9+7;
ll modularExponentiation(ll x,ll n,int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}
int GCD(ll A, int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
int isprime(ll n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    FAST;
    ll t;
    cin>>t;
    while(t--) {
        ll m, n, i, j, a[100001] = {}, mini = LLONG_MAX,minimum=LLONG_MAX, p = 0, ans = LLONG_MAX, maxi = 0,c=0;
        cin >> n >> m;
        ll x;
        vector<pair<ll, ll>> vec;
        for (i = 1; i <= n; i++) {
            cin >> x;
            vec.push_back(make_pair(x, i % m));
        }
        sort(vec.begin(), vec.end());
        for(i=0;i<n;i++)
        {
            if(c==m)
            {
                minimum=LLONG_MAX;
                maxi=0;
                a[vec[i].second]=vec[i].first;
                for(j=0;j<m;j++)
                {
                    minimum=min(a[j],minimum);
                    maxi=max(a[j],maxi);
                }
                mini=min(mini,maxi-minimum);
            }
            else {
                if (a[vec[i].second] == 0) {
                    c++;
                    a[vec[i].second] = vec[i].first;
                }
                else
                {
                    a[vec[i].second]=vec[i].first;
                }
                if(c==m)
                {
                    minimum=LLONG_MAX;
                    maxi=0;
                    for(j=0;j<m;j++)
                    {
                        minimum=min(a[j],minimum);
                        maxi=max(a[j],maxi);
                    }
                    mini=min(mini,maxi-minimum);
                }
            }

        }
        cout<<mini<<"\n";
    }

}
