class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        vector<int> m(grid.size());
        for(int i =0;i<grid.size();i++){
            int count = 0;
            for(int j = grid[0].size()-1;j>=0;j--){
                if(grid[i][j]==0) count++;
                else {
                    m[i]=count;
                    break;
                }
            }
            m[i]=count;
        }
        for(int i =0;i<grid.size();i++) cout<<m[i]<<" ";
        int ans = 0;
        int n = grid.size();
        for(int i =0;i<n;i++){
            cout<<m[i]<<" ";
            if(m[i]<n-i-1) {
               int k =i;
                while(k<n&&m[k]<n-i-1){
                    k++;
                    
                }
               if(k==n) return -1;
               while(k>i){
                  swap(m[k],m[k-1]);
                  ans++;
                  k--;
                }
                    
              }
            
            }
            //cout<<m[i]<<" ";
         return ans;
        }
       
        
    };
