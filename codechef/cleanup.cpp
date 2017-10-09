#include <bits/stdc++.h>

using namespace std;

#define INF (int)1e9
#define EPS 1e-9
#define REP(i, a, b) for(int i = a; i < b; ++i)
#define PB push_back
#define MP make_pair

typedef long long ll;
typedef pair<int, int> PII;
// vector<int> VI,chef,chefas;
typedef vector<string> VS;
typedef vector<PII> VII;

const float PI = 3.1415926535897932384626433832795;
const int MOD = 1000000007;

int main()
{	
	int t,i,j,n,m,temp;

	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		vector<int> VI,chef,chefas;
		for (i = 1; i <= n; i++)	VI.push_back(i);

			for (i = 1; i <= m; i++){
				scanf("%d",&temp);
				VI.erase(std::remove(VI.begin(), VI.end(), temp), VI.end()); 
			}

			sort(VI.begin(),VI.end());

			for(i=0; i < VI.size(); i++){
				if (i%2==0){
					chef.push_back(VI[i]);
				}
				else {
					chefas.push_back(VI[i]);
				}
			}
			for (i = 0; i < chef.size(); i++){
				printf("%d ",chef[i]);
			}
			printf("\n");
			for (i = 0; i < chefas.size(); i++){
				printf("%d ",chefas[i]);
			}
			printf("\n");
		}

		return 0;
	}