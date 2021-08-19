#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main() {
    int t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        ll n = floor(sqrt(k));
        ll gone = k-n*n;
        ll x = n;
        ll y = n;
        k=gone;
        if(k==0) cout<<n<<" "<<1<<endl;
        else {
            if(k<=n+1) cout<<k<<" "<<n+1<<endl;
            else cout<<n+1<<" "<<(n+1 -(k-n-1))<<endl;
        }
    }
    return 0;
}
