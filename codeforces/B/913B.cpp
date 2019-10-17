    #include<bits/stdc++.h>
    using namespace std;
    map<int, vector<int> > mp;
    vector< bool> b(10000,0);
     
    int main(){
    	long int n,i,num,cou,j;
    	cin>>n;
    	
    	for(i=2;i<=n;i++){
    		cin>>num;		
    		mp[num].push_back(i);		
    	}
    	
    	for(i=1;i<=n;i++){
    		if(mp[i].size())
    			b[i]=1;
    	}
    	
    	}
    	
    	for(i=1;i<=n;i++){
    		cou=0;
    		if(b[i]){
    			for(j=0;j<mp[i].size();j++){
    				if(!b[mp[i][j]])
    					cou++;
    			}
    			if(cou<3){
    			cout<<"No";
    			return 0;
    		}
    		}
    		
    			
    	}
    	cout<<"Yes";
    	return 0;
    }
