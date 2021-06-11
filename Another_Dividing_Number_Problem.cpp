#include <bits/stdc++.h>
using namespace std;
long long int solve(int n)
{
    long long int ans=0;
    while (n % 2 == 0)
    {
        ans++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            ans++;
            n = n/i;
        }
    }
 
    if (n > 2){
        ans++;
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b,k;
         cin>>a>>b>>k;
        if(k==1){
             if(a==b){
                cout<<"NO"<<endl;
                continue;
            }
            else if(a%b==0 || b%a==0){
                cout<<"YES"<<endl;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                continue;
            }
         }
         else {
             int ans= solve(a);
             ans+=solve(b);
             if(ans>=k) cout<<"Yes"<<endl;
             else cout<<"No"<<endl;
         }
        
 
    }
    return 0;
}
