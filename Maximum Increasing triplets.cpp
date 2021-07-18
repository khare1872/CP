// Maximum increasing triplets
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for(int i =0;i<n;i++) cin>>a[i];
    for(int i =0;i<n;i++) cin>>b[i];
    for(int i =0;i<n;i++) cin>>c[i];
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    
    int i = 0;
    int j = 0;
    int k = 0;
    int count =0;
    while(i<n&&j<n&&k<n){
        if(a[i]<b[j]&&b[j]<c[k]){
            i++;
            j++;
            k++;
            count++;
        }
        else if(a[i]>=b[j]){
            while(a[i]>=b[j]&&j<n) j++;
        }
        else if(b[j]>=c[k]){
            while(b[j]>=c[k]&&k<n) k++;
        }
    }
    cout<<count<<endl;
}
