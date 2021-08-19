#include <bits/stdc++.h>
using namespace std;
int solve(string s,string t){
    int count = 0;
    int i = 0;
    int j = 0;
    while(i<s.size()){
        if(s[i]==t[j]){
            i++;
            j++;
        } 
        else {
            i++;
            count++;
        }
    }
        count+=(t.size()-j);
    return count;
}
int main() {
   int t;
   cin>>t;
   vector<string> powerOfTwo;
   long long int num = 1;
   while(powerOfTwo.size()<64){
       powerOfTwo.push_back(to_string(num));
       num*=2;
   }
   while(t--){
       string n;
       cin>>n;
       int ans = 500;
       for(int i =0;i<powerOfTwo.size();i++){
           int temp = solve(n,powerOfTwo[i]);
           ans = min(temp,ans);
       }
       cout<<ans<<endl;
   }
}
