#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        long long int l,r;
        cin>>n>>l>>r;
        vector<long long int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int i=0;
        int j=n-1;
        long long int res=0;
       while (i < j){
        if (v[i] + v[j] <=r){
            res += (j - i);
            i++;
        }
        else
            j--;
    }
    i=0;
    j=n-1;
    long long int res2=0;
    while (i < j){
        if (v[i] + v[j] <l){
            res2 += (j - i);
            i++;
        }
        else
            j--;
    }
 
    cout<<res-res2<<endl;
 
    }
    return 0;
}
