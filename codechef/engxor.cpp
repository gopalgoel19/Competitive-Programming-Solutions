#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isEvenBits(int n){
    int ones = 0;
    while(n>0){
        if(n%2==1) ones++;
        n/=2;
    }
    if(ones%2 == 0 ) return true;
    else return false;
}

int countEven1s(vector<int> &b){
    int n=b.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(isEvenBits(b[i])) count++;
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        scanf("%d%d", &n, &q);
        vector<int> a(n);
        for(int i=0;i<n;i++) {
            int temp;
            scanf("%d", &temp);
            a[i] = temp;
        }
        int c = countEven1s(a);
        vector<int> pp(1000000+1);
        for(int i=pp.size()-1;i>0;i--){
            pp[i] = isEvenBits(i);
        }
        while(q--){
            int p;
            scanf("%d", &p);
            if(pp[p]){
                printf("%d %d\n",c,n-c);
            }
            else {
                printf("%d %d\n",n-c,c);
            }
        }
    }
    return 0;
}