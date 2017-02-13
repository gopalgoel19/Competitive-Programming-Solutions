#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	int* a = new int [n];
	int* b = new int [n];
	for (int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	long long int sum=0;
	int j=0;
	if(n==1) cout<< (a[0]/2)+(a[0]%2) << endl; 
	for (int i=0;i<n;i++) {
		if(a[i]%2==0) sum+=a[i]/2;
		if(a[i]%2==1) b[j++]=a[i];
	}
	int i1=0,i2=1;
	for(;i1<j && i2<j;){
		if(b[i1]==0) i1++;
		else if(b[i2]==0) i2++;
		else if(b[i2]-b[i1]>1) {
			//cout<<sum<<endl;
			sum += (b[i1]+b[i2])/2;
			//cout<<sum<<endl;
			b[i1]=0;
			b[i2]=0;
			i1++;
			i2++;
		}
		else i2++;
	}
	for(int i=0;i<j;i++){
		if(b[i]==0) continue;
		else sum+= (b[i]/2 + b[i]%2 );
	}


	cout<< sum << endl;
}