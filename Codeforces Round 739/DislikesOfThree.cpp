#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
int main() {
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int i = 0;
        while(k>0){
            if(i%3==0||i%10==3) i++;
            else {
                i++;
                k--;
            }
        }
        cout<<i-1<<endl;
    }
    return 0;
}
