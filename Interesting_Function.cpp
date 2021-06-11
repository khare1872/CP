#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int t;
   cin>>t;
   while(t--){
       long long int a,b;
       cin>>a>>b;
       long long int ans = b-a;
       
       while(a>0){
           ans-= (a/10)*1;
           a=a/10;
           
       }
       int g=1;
       while(b>0){
           ans+=(b/10)*1;
           g++;
           b=b/10;
           
       }
       cout<<ans<<endl;
   }
 
    return 0;
}
