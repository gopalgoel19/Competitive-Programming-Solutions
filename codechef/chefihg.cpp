//Pro-Coder
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
typedef priority_queue <int> PQ;;

int n,m;
char s[100001];
int k=0;


void bfs(char** a,int i,int j){
	a[i][j]='*';
	if( j+1<m && a[i][j+1]=='.'){
		s[k++]='L';
		bfs(a,i,j+1);
	}
	if( i+1<n && a[i+1][j]=='.'){
		s[k++]='U';
		bfs(a,i+1,j);
	}
	if( j-1>=0 && a[i][j-1]=='.'){
		s[k++]='R';
		bfs(a,i,j-1);
	}
	if( i-1>=0 && a[i-1][j]=='.'){
		s[k++]='D';
		bfs(a,i-1,j);
	}
}



int main () {
	BOOSTIO;
    
    cin>>n>>m;
    char** a = new char*[n];
    int c_i,c_j;
    
    for(int i=0;i<n;i++) a[i] = new char[m];
   	
   	for(int i=0;i<n;i++){
   		for(int j=0;j<m;j++){
   			cin>>a[i][j];
   			if(a[i][j]=='C') {
   				c_i=i;
   				c_j=j;
   			}
   		}
   	}
   	bfs(a,c_i,c_j);
   		s[k++]='\0';
   		cout<<s;
    return 0;
}