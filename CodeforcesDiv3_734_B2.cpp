#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
 
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v(n);
		for(int i =0;i<n;i++) cin>>v[i];
		if(k>=n){
		    for(int i =1;i<=n;i++) cout<<i<<" ";
		    cout<<endl;
		    continue;
		}
		map<int,vector<int>> m;
		for(int i =0;i<n;i++){
		    m[v[i]].push_back(i);
		}
	   int same = 0;
	   int diff = 0;
	   for(auto element:m){
	       if(element.second.size()>=k)
	       same+=1;
	       else diff+=element.second.size();
	   }
	   same+=diff/k;
		vector<int> va(k+1,0);
		
		int c = min(same,n/k);
		//cout<<c<<endl;
		int temp = 1;
		for(auto element:m){
		    int f =0;
		    int start = temp;
		    for(int j = 0;j<element.second.size();j++){
		        if(temp!=start||(j==0)){
		            if(va[temp]<c){
		            v[element.second[j]] = temp;
		            va[temp]++;
		            temp=(temp)%k +1;
		            }
		            else  v[element.second[j]] = 0;
		            
		        }
		        else  {
		            v[element.second[j]] = 0;
		        }
		    }
		}
		for(int i =0;i<n;i++) cout<<v[i]<<" ";
		cout<<endl;
	}
	
	return 0;
}
