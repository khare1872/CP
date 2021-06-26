#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){;
	vector<long long int> even;
	vector<long long int> odd;
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
	    long long int a ;
	    cin>>a;
	    a%2==0?even.push_back(a):odd.push_back(a);
	}
	for(int i =0;i<even.size();i++) cout<<even[i]<<" ";
	for(int i =0;i<odd.size();i++) cout<<odd[i]<<" ";
	cout<<endl;
	}
	return 0;
}
