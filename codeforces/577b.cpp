#include <iostream>
#define fr(a,b,c) for(int a = b, _ = c; a < _; a++)
typedef unsigned long long ui64;
using namespace std;
int v[1100];
bool dp[1100][1100];
int main()
{
	int n, m;
	cin >> n >> m;
	if(n > m){
		cout << "YES" << endl;
		return 0;
	}
	fr(i,0,n){
		cin >> v[i];
		v[i] = v[i] % m;
	}
	dp[0][v[0]] = true;
	fr(i, 1, n){
		dp[i][v[i]] = true;
		fr(j,0,m){
			if(dp[i-1][j]){
				dp[i][ (j+v[i])%m ] = true;
				dp[i][j] = true;
			}
		}
	}
	if(dp[n-1][0]){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}
