#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main() {
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>b) swap(a,b);
        ll total = abs(b-a)*2;
        if(a>total||b>total||c>total) cout<<-1<<endl;
        else {
            ll diff = b-a;
            if(c+diff<=total&&c+diff!=a&&c+diff!=b) cout<<c+diff<<endl;
            else if(c-diff>=1&&c-diff!=a&&c-diff!=b) cout<<c-diff<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}
