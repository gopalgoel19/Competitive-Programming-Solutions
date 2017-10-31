#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
typedef long long int ll;
ll maxi(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
ll f(ll A,ll B){
    if(A==1 && B==1)
        return 0;
    int c=0;
    while(A>0 && B>0)
    {
        if(A>=B){
            A=A-2;
            B++;
        }
        else{
            A++;
            B=B-2;
        }
        c++;
    }
    return c;
}
int main()
{
    int A,B;
    cin>>A>>B;
    cout<<f(A,B)<<endl;
}