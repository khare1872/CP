#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int v[n];
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        int a = v[0];
        int b = v[1];
        int c = v[2];
        if(a != b){
            if(a == c){cout << 2 << endl;}
            else if(b == c){cout << 1 << endl;}
        }
        else{
            int x = v[0];
            for(int i = 0; i<n; i++){
                if(v[i] != x){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
    }
	return 0;
}