#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the size of array\n";
    int n;
    cin>>n;
    int* a= new int[n];
    cout<<"Enter element one by one\n";
    for(int i=0;i<n;i++) cin>>a[i];
    
    return 0;
}


12  123 1234           12   121 4
                            112 3
                            211 3
                            121 4
        4123
    312 3124
        4312
21  213 2134
        4213
    321 3214
        4321