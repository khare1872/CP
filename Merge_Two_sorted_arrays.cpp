#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i =0;i<n;i++) cin>>a[i];
    vector<int> b(m);
    for(int i =0;i<m;i++) cin>>b[i];
    int i =0;
    int j =0;
    while(j<m&&i<n){
        if(a[i]<b[j]) {
            cout<<a[i]<<" ";
            i++;
        }
        else {
            cout<<b[j]<<" ";
            j++;
        }
    }
    if(j==m) {
        while(i<n) {
            cout<<a[i]<<" ";
            i++;
        }
    }
    if(i==n){
        while(j<m){
            cout<<b[j]<<" ";
            j++;
        }
    }
   cout<<endl;
    return 0;
}
