#include<iostream>
#include<string>

using namespace std;

void check(){
    string s;
    cin >> s;
    int c = 1;
    int m = 1;
    int i =1, j;
    while(i < s.length()){
        if(s[i] == s[i-1] || s[i] == '=' || s[i-1] == '='){
            if(s[i] != '=' && s[i-1] != '='){
                c++;
            }
        }
        else{
            c = 1;
        }
        m = max(c,m);
        i++;
    }
    cout << ++m << endl;
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        check();
    }
    return 0;
}
