    #include<bits/stdc++.h> 
    #include<numeric>
    #include<string>
    #define ll long long
    #define INF 0x3f3f3f3f
    #define MAXN 10000
    #define mod 1000000007
    #define pb push_back
    #define fast std::ios_base::sync_with_stdio (false); cin.tie(NULL); cout.tie(NULL)
    using namespace std;
    int z;
     
    //vector<int>a(10005);
     
    char fun(char x,char y){
    	for(int i=97;i<=122;i++){
    		//cout<<int(x)<<" "<<int(y)<<endl;
    		if(i!=int(x) && i!=int(y))
    		return char(i);
    	}
    }
    void solve(){
    	string s;
    	cin>>s;
    	
    	for(int i=1;i<s.length();i++){
    		if(s[i]==s[i-1]){
    			if(i<s.length()-1)
    				s[i] = fun(s[i],s[i+1]);
    			else
    				s[i] = fun('&',s[i]);
    			
    		}
    	}
    	
    	for(int i=0;i<s.length();i++)
    		cout<<s[i];
    		cout<<endl;
    }
       
         
         
         
    int main(){
     //	int t=100;
    // 	scanf("%d",&t);
     //while(t--)
    //int a[5]={[0...3]=1};
     
       		solve(); 
    	 
        	
    }
