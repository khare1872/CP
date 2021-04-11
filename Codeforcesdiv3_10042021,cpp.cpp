#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		vector<long long int> v(n+2);
		long long int size=n+2;
		vector<long long int> a;

		long long int actual_sum=0;
		long long int x=0;

		for(int i=0;i<size;i++){
			cin>>v[i];
			//sum+=v[i];
		}
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++){
			actual_sum+=v[i];
            
		}
		if(actual_sum==v[size-2]){
			for(int i=0;i<n;i++){
				cout<<v[i]<<" ";
			}
			cout<<endl;
		}
		else {
			actual_sum+=v[size-2];
			x=actual_sum-v[size-1];
			int i=0;
			for(i=0;i<size-1;i++){
				if(v[i]!=x){
					a.push_back(v[i]);
				}
				else break;
			}
			for(int j=i+1;j<size-1;j++){
					a.push_back(v[j]);
				}
			if(a.size()==n) {
				for(int j=0;j<n;j++){
					cout<<a[j]<<" ";
				}
			}
			else cout<<-1;
			}
			cout<<endl;
		}
	
	return 0;
}