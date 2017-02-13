#include<iostream>
#define SIZE 1001
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        char s1[SIZE] ;
        char s2[SIZE] ;
        char s3[26] = {0};
        cin>>s1;
        cin>>s2;
        bool flag=false;
        for(int j=0 ; s1[j]!='\0';j++){
            for(int z=0; s2[z]!= '\0';z++){
                if(s1[j]==s2[z]) {
                    cout<<"Yes"<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag==true) break;
        }
        if(flag==false) cout<<"No"<<endl;
    }
}