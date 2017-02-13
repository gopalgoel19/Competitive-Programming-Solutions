#include <bits/stdc++.h>
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
using namespace std;

typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
typedef vector<ii> vii; 
typedef vector<vii> vvii;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vvi v1(n,vi(m));
        for(int i=0;i<n;i++) for(int i=0;i<m;i++) cin>>v[i][j];
        for(int i=0;i<n;i++) for(int i=0;i<m;i++) {
            int n;
            cin>>n;
            v[i][j]-=n;
        }
        
    }
}
