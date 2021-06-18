#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(d == 1){
            cout << 1 << " " << b << " " << a << " " << b;
        }
        else if(c == 1){
            cout << a << " " << 1 << " " << a << " " << b;
        }
        else if(d == b){
            cout << 1 << " " << 1 << " " << a<< " " << 1;
        }
        else if(c == a){
            cout << 1 << " " << 1 << " " << 1 << " " << b;
        }
        else{
            cout << 1 << " " << 1 << " " << a << " " << b;
        }
        cout << endl;
    }
	return 0;
}
