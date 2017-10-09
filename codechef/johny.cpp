#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for(int i = a; i < b; ++i)

int main()
{	
	int t,n,i,j,k,val;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n+1];
		REP(i,1,n+1)scanf("%d",&arr[i]);
		scanf("%d",&k);
		val = arr[k];
		sort(arr+1,arr+n+1);
		REP(i,1,n+1)
			if (val == arr[i]){
				cout << i << endl;
				break;
			}
	}
	return 0;
}