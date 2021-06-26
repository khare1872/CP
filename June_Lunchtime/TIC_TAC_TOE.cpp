#include<bits/stdc++.h>
using namespace std;

    

int main()
{
  ios::sync_with_stdio(false); cin.tie(0);
  int t;
  cin>>t;
    while(t--)
    {
     long long int n, m, k;
    cin >> n >> m >> k;
    long long int vectora[n*m+1],vectorb[n*m+1];
    for(int i =0;i<n*m;i++)
    cin>>vectora[i+1]>>vectorb[i+1];   
    long long int left = 1, right = n*m;
    string ans = "Draw";
    long long int total=100000000;
    long long int mul = (n+2)*(m+2);
    while(left<=right){
        long long int mid = (left+right)/2;
        vector<vector<int>>current(n+5, vector<int>(m+5,0));
        for(int i=1;i<=mid;i++){
            if(i&1)current[vectora[i]][vectorb[i]]=1;
            else current[vectora[i]][vectorb[i]]=2;
        }
        long long int fn = 0;
        vector<vector<int>> col(n+2, vector<int>(m+2,0));
        for(int i=n;i>=1;i--){
            for(int j=1;j<=m;j++){
                if(current[i][j]==1)col[i][j]=col[i+1][j]+1;
                else col[i][j]=0;
            }
        }
        for(int i=n;i>=1;i--){
            for(int j=m;j>=1;j--){
                if(col[i][j]>=k)col[i][j]=col[i][j+1]+1;
                else col[i][j]=0;
                if(col[i][j]>=k)fn=1;
            }
        }
        col.clear();
        col.resize(n+2, vector<int>(m+2,0));
        for(int i=n;i>=1;i--){
            for(int j=1;j<=m;j++){
                if(current[i][j]==2)col[i][j]=col[i+1][j]+1;
                else col[i][j]=0;
            }
        }
        for(int i=n;i>=1;i--){
            for(int j=m;j>=1;j--){
                if(col[i][j]>=k)col[i][j]=col[i][j+1]+1;
                else col[i][j]=0;
                if(col[i][j]>=k)fn=2;
            }
        }
        if(fn==0){
            left=mid+1;
        }else{
            if(mid<total){
                total=mid;
                if(fn==1)ans="Alice";
                else ans="Bob";
            }
            right=mid-1;
        }
    }
    cout<<ans<<"\n";
}
return 0;
    }
