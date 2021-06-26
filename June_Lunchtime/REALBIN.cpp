#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
    cin>>t;
    while(t--){
        long long int x,y;
        cin>>x>>y;
        int flag =0;
        
        while(y>1){
            if(y%2==1) {
                flag =1;
                break;
            }
            y=y/2;
        }
        if(!flag) cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
	return 0;
}
