#include <bits/stdc++.h>
using namespace std;
char h[1000010];
char s[1000010];
int v[1000010];

void processLps(){
	int n = strlen(s);
	int len=0;
	v[0]=0;
	int i=1;
	while(i<n){
		if(s[i]==s[len]){
			len++;
			v[i]=len;
			i++;
		}
		else{
			if(len==0) {
				v[i]=len;
				i++;
			}
			else len--;
		}
	}
}

void kmp(){
	int n=strlen(s);
	int size = strlen(h);
	processLps();
	int i=0;
	int j=0;
	while(i<size){
		if(h[i]==s[j]) {
			i++;
			j++;
		}
		else{
			if(j!=0) j=v[j-1];
			i++;
		}
		if(j==n){
			printf("%d\n",i-n);
			j=v[j-1];
		}
	}
	printf("\n");
}

int main(){
	ios_base::sync_with_stdio(false);
	int n;
	while(scanf("%d\n",&n)!=EOF){
		scanf("%s",s);
		scanf("%s",h);
		kmp();
	}
}