#include <bits/stdc++.h>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define PB push_back
#define MP make_pair

typedef long long ll;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;

const float PI = 3.1415926535897932384626433832795;
const int MOD = 1000000007;

int main()
{	
	int t,n,p;
	cin >> t;
	while(t--){
		cin >> n >> p;
		int a[n],easy = 0,hard = 0;
		REP(i,0,n){
			cin >> a[i];
			if (a[i] >= p/2)easy++;
			else if(a[i] <= p/10)hard++;
		}
		if(easy == 1 && hard == 2)printf("yes\n");
		else printf("no\n");
	}
	return 0;
}