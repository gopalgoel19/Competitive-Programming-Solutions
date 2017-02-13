#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

typedef pair<long long int,long long int> ii;

long long int area(int i, int j, int k, vector<ii> &p){
	return llabs( p[i].x * (p[j].y-p[k].y) + p[j].x * (p[k].y - p[i].y) + p[k].x * (p[i].y - p[j].y) );
}

long long int deno(int i, int j, int k, vector<int> &prob, long long int &n){
	long long int d = 2 * prob[i] * prob[j] * prob[k] ;
	return d;
}
int main(){
	int t;
	cin>>t;
	if(t<)
	vector<ii> p(t);
	vector<int> prob(t);
	for(int i=0;i<t;i++){
		long long int xx,yy,pr;
		cin>>xx>>yy>>pr;
		p[i] = ii(xx,yy);
		prob[i] = pr;
	}
	int i=0,j=1,k=2;
	long long int n= 0;
	long long int d= 0;

	for(int i=0;i<t;i++){
		for(int j=i+1;j<t;j++){
			for(int k=j+1;k<t;k++){
				long long int u = area(i,j,k,p);
				long long int l = deno(i,j,k,prob,u) ;
				if(u==0) continue;
				n = n ^ u ;
				d = d ^ l ;
			}
		}
	}
	cout<<n<<" "<<d<<endl;
}