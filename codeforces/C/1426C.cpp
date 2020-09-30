#include<bits/stdc++.h>
#define deb(x) cout << #x << ": " << x << endl
#define ll long long
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        int ans = 1e9;
        
        for(int x=1;x*x<=n;x++){
            ans = min(ans, x-1+(n-1)/x);
        }
        cout<<ans<<endl;
 
    }
    
	return(0);
}
