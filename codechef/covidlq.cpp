#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int counter = 0;
        int last = 0;
        bool ans = true;
        for(int i=0;i<n;i++){
            int current;
            cin>>current;
            if(last == 0 && current == 1 ){
                last = 1;
                counter++;
            } else if (last == 0 && current == 0){
                continue;
            } else if (last == 1 && current == 0){
                counter++;
            } else { // last == 1 &&  current == 1
                if(counter<6) {
                    ans = false;
                }
                else {
                    counter = 1;
                }
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
} 