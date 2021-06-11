#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int> v(n);
        long long int sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        if(sum%n!=0) cout<<-1<<endl;
        else {
            sum = sum/n;
            int count=0;
            for(int i=0;i<n;i++){
                if(v[i]>sum) count++;
            }
            cout<<count<<endl;
        }
    }
    return 0;
}
