#include <iostream>
using namespace std;
main(){int t,n,i,j,k,v[100][100];cin>>t;for(k=0;k<t;k++){cin>>n;for(i=0;i<n;i++){for(j=0;j<=i;j++){cin>>v[i][j];}}for(i=n-2;i>=0;i--){for(j=0;j<=i;j++){v[i][j]+=max(v[i+1][j],v[i+1][j+1]);}}cout<<v[0][0]<<endl;}}