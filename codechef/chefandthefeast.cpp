#include<iostream>
#include<algorithm>

using namespace std;

long long int calc(){
    int n, c = 0;
    long long int spc = 0, sn = 0, sp = 0;
    cin >> n;
    long long int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int i;
    for(i =n-1; i >=0; i--){
        if(a[i] >= 0){
            spc += a[i];
            c++;
        }
        else{
            break;
        }
    }
    for(i; i >= 0; i--){
        if(a[i] < 0){
            if((spc*c)+a[i] > (spc+a[i])*(c+1)){
                sn += a[i];
            }
            else{
                spc += a[i];
                c++;
            }
        }
    }
    sp = c*spc;
    return sp+sn;
}

int main(){
    int t;
    long long int r;
    cin >> t;
    while(t--){
        r = calc();
        cout << r << endl;
    }
    return 0;
}
