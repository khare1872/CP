#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<char>> v (n,vector<char> (n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> v[i][j];
            }
        }
        int x1=0,y1=0,x2=0,y2=0,f=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]=='*'){
                    if(f==0){
                        x1=i; y1=j;
                        f++;
                    }
                    else{
                        x2=i; y2=j;
                    }
                }
            }
        }
        bool flag= false;
        if(y1==y2){
            if(y1<n-1){
                v[x1][y1+1]='*';
                v[x2][y2+1]='*';
            }
            else{
                v[x1][y1-1]='*';
                v[x2][y2-1]='*';
            }
            flag=true;
        }
 
        if(x1==x2 && flag==false){
            if(x1<n-1){
                v[x1+1][y1]='*';
                v[x2+1][y2]='*';
            }
            else{
                v[x1-1][y1]='*';
                v[x2-1][y2]='*';
            }
            flag=true;
        }
 
        if(!flag){
            v[x1][y2]='*';
            v[x2][y1]='*';
 
        }
 
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << v[i][j];
            }
            cout << endl;
        }
 
 
 
    }
 
    return 0;
}