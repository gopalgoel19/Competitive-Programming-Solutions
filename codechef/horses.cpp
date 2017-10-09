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
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int arr[n];
		for (int i = 0; i < n; i++)	
			scanf("%d",&arr[i]);
		sort(arr,arr+n);

		int min = arr[1] - arr[0];

		for (int i = 0; i < n-1; ++i){
			int temp = arr[i+1] - arr[i];
			if (temp<min){
				min = temp;
			}
		}
		printf("%d\n",min);
	}
	return 0;
}