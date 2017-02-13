#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
    int d;
    cin>>d;
    for(int i=0;i<d;i++){
        string s;
        cin>>s;
        int l= s.length();
        if(s.length()==1){
            cout<<"NO"<<endl;
            continue;
        }
        if(l%2==0) {
            int count=0;
            for(int j=0;j<l/2;j++){
                if(s[j]==s[l/2+j]) count++;
            }
            if(count==(l/2)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        else{
            int count=0;
            int flag=0;
            for(int j=0;j<l/2;j++){
                if(s[j]==s[l/2+j+flag]) count++;
                else if(s[j]==s[l/2+j+1]) {
                    count++;
                    flag=1;
                }    
            }
            if(count!=l/2){
                flag=0;
                count=0;
                for(int j=0;j<l/2;j++){
                    if(s[l-1-j]==s[l/2-j-flag]) count++;
                    else if(s[l-1-j]==s[l/2-j-1]) {
                        count++;
                        flag=1;
                    }    
                }
            }
            if(count==(l/2)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}