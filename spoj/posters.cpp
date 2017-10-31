
//yashverma

#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define F first
#define S second
#define pb push_back
#define Pi 3.141592653589793
#define MOD 1000000007
// For i/o
#define sd1(a) scanf("%d",&a)
#define sd2(a,b) scanf("%d %d",&a,&b)
#define sd3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define sf scanf
#define pf printf
// For debugging
#define deb(a) printf("deb%d\n",a)

typedef pair<int,int> ii;
typedef long long ll;

vector<int> vec[10000007];
int cnt[10000007];
int ans = 0;

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--)
	{
		ans = 0;
		rep(i,0,10000007){cnt[i] = 0; vec[i].clear(); }
		set<int> s;
		int n,a,b;
		cin >> n;
		int i = 1;
		while(n--)
		{
			cin >> a >> b;
			vec[a].pb(i);
			vec[b+1].pb(-1*i);
			i += 1;
		}
		s.insert(0);
		rep(i,0,10000007)
		{
			for(int j = 0; j<vec[i].size(); j++)
			{
				if(vec[i][j] > 0)
					s.insert(vec[i][j]);
				else 
					s.erase(-1*vec[i][j]);
			}
			int top = *(s.rbegin());
			if(cnt[top] == 0)
			{
				ans += 1;
				cnt[top] = 1;
			}
		}
		cout << ans-1 << "\n";
	}
	return 0;
}
