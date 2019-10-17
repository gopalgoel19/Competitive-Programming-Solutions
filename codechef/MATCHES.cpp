#include<bits/stdc++.h>
using namespace std;
int sticks[]={6,2,5,5,4,5,6,3,7,6};
int getSum(int n) 
{  
    int sum = 0; 
    while (n != 0) 
    { 
        sum+=sticks[(n%10)];
        n = n/10; 
    }  
    return sum;
}
int main()
{
    int T;
    int A,B;
    cin>>T;
    while(T--)
    {
        cin>>A>>B;
        int sum=A+B;
        cout<<getSum(sum)<<endl;
    }
}