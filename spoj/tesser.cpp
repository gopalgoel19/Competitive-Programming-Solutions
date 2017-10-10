#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++)scanf("%d", &a[n]);
		char msg[100001];
		scanf("%s", msg);
		int l = strlen(msg);
		// KMP starts
		int flag = 0;
		for(int i = 1; i < n; i++){
			bool found = true;
			flag = 0;
			for(int j = 0; j < l && found; j++){
				if(msg[j] == 'G' && a[i+j] < a[i+j-1])found = false;
				else if(msg[j] == 'L' && a[i+j] > a[i+j-1])found = false;
				else if(msg[j] == 'E' && a[i+j] != a[i+j-1])found = false;
				else if (i + j >= n)found = false;
			}
			if(found){
				flag = 1;
				break;
			}
		}
		if(flag)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}