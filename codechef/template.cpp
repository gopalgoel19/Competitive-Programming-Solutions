#include <bits/stdc++.h> 
using namespace std;
 
#define BOOSTIO ios_base::sync_with_stdio (0), cin.tie (0)
#define MOD 1e9 + 7
#define LL long long
#define LD long double
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define rFOR(i, a, b) for(int i = a; i > b; --i)
#define PB push_back
 
typedef vector <int> Vector;
typedef pair <int, int> Pair;
typedef map <string, int> Map;
typedef stack <int> Stack;
typedef queue <int> Queue;
typedef priority_queue <int> PQ;
 
Vector s;
bool temp=true;
int x,y;

void Dfs(Vector* g, bool* visited){
	//cout<<"dsf"<<endl;
	int x= s.back();
	int n= g[x].size();
	//cout<<x<<endl;
	//cout<<n<<endl;
	for(int i=0;i<n;i++){
		if(!temp) break;
		//cout<<"in loop"<<g[x][i]<<endl;
		if(visited[ g[x][i] ]) continue; 

		{
			s.push_back(g[x][i]);
			visited[ g[x][i] ] = true;

		}
		if(g[x][i]==y) temp=false;
		Dfs(g, visited);
		if(temp) s.pop_back();
	}
}

int main () {
    BOOSTIO;
    int n;
    cin>>n;
    Vector g[n+1];
    int* a = new int[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n-1;i++){
    	int u,v;
    	cin>>u>>v;
    	g[u].push_back(v);
    	g[v].push_back(u);
    }
    int q;
    cin>>q;
    bool* visited = new bool[n+1];
    while(q--){
    	char c;
    	cin>>c>>x>>y;
    	//cout<<"Query "<<q<<endl;
    	memset(visited,false,n+1);
    	s.push_back(x);
    	visited[x]=true;
    	temp=true;
    	Dfs(g,visited);
    	Vector::iterator i;
    	int size=s.size();
    	int k=0;
    	for(i=s.begin();i<s.end();i++){
    		s[k++]=a[*i];
    	}
    	sort(s.begin(),s.end());
    	if(c=='F'){
    		cout<<abs(s[0]-s[size-1])<<endl;
    	}
    	else{
    		int min=INT_MAX;
    		for(int i=1;i<size;i++){
    			if(s[i]-s[i-1]<min) min=s[i]-s[i-1];
    		}
    		cout<<min<<endl;
    	}
    	s.clear();
    }
    return 0;
}
