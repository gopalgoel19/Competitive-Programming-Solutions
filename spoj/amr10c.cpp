#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <ctime>
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
using namespace std;  // H A M L E T
long long toi(string s){istringstream is(s);long long x;is>>x;return x;}
string tos(long long t){stringstream st; st<<t;return st.str();}
long long gcd(long long a, long long b){return __gcd(a,b);}long long lcm(long long a,long long b){return a*(b/gcd(a,b));}
vector < pair <int, int> > primeFact(int N)
{
	vector < pair <int, int> > V;
	
	for(int i=2; i*i<=N; i++)
	{
		int a=0;
		while(N%i==0)
		{
			N/=i;
			a++;
		}
		if(a!=0) V.push_back(make_pair(i, a));
	}
	if(N>1) V.push_back(make_pair(N, 1));
	
	return V;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<pair<int,int> >v=primeFact(n);
        int cont=0;
        for(int i=0;i<v.size();i++){
            cont=max(v[i].second,cont);    
        }
        if(cont==0)cont=1;
        cout<<cont<<endl;
    }
    return 0;
}

