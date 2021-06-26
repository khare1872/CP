#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    string ans = "";
	    if(s[0]=='1'){
	       s.insert(1,"0");
	       ans=s;
	    }
	    else {
	        ans= "1";
	        ans+=s;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
