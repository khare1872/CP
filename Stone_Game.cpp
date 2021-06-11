#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int> v(n);
        int maxa=0;
        int mina=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>v[maxa]) maxa=i;
            if(v[i]<v[mina]) mina=i;
        }
        int ans = 0;
        if(maxa>mina){
            int a=min(maxa+1,min(n-maxa+mina+1,n-mina));
            //int b=min(n-mina+n-mina-maxa,n-mina+maxa+1);
            cout<<a<<endl;
        }
        else {
         int a =min(mina+1,min(n-mina+maxa+1,n-maxa));
        // int b = min(n-maxa+mina+1,n-maxa+n-mina-maxa);
         cout<<a<<endl;
        }
    }
    return 0;
}
