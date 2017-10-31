#include<iostream>

using namespace std;

int main(){
    long int a,b;
    int result;
    cin>>a>>b;
    if(a==b) result=1;
    else {
    result=(a+1)%10;
    for(long int i=a+2;i<=b;i++){
        result=(result*(i%10))%10;
        if (result==0) break;
    }
    }
    cout<<result;
}
