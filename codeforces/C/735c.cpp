//Wrong Answer

#include<iostream>
#include<cmath>
typedef long long int ll;
using namespace std;
int main(){
    double N;
    ll n;
    cin>>n;
    N=n;
    double l = log2(N);
    //cout<<l<<'\n';
    if( (n & (n - 1)) == 0)
        cout<<int(l)<<endl;
    else
        cout<<int(l)+1<<endl;
}