class Solution {
public:
     bool check(vector<vector<int>>& m, int i, int j,int k) {

        int sum = 0;
        for(int a=0;a<=k;a++){
            sum+=m[i][j+a];
        }
         //cout<<sum<<" ";
            for(int b=1;b<=k;b++){
                int t = 0;
                for(int a=0;a<=k;a++){
                t+=m[i+b][j+a];
        } 
                
                if(t!=sum) return false;
    }
         for(int b=0;b<=k;b++){
                int t = 0;
                for(int a=0;a<=k;a++){
                t+=m[i+a][j+b];
        } 
             //cout<<t<<" ";
                if(t!=sum) return false;
            }
          int t = 0;
         for(int b=0;b<=k;b++){
               
                t+=m[i+b][j+b];
                
            }
         if(t!=sum) return false;
           t = 0;
        for(int b=0;b<=k;b++){
               
                t+=m[i+b][j+k-b];
                
            }
         if(t!=sum) return false;
        
            
     return true;
    }
    int largestMagicSquare(vector<vector<int>>& grid) {
        if (grid.size() < 2 || grid[0].size() < 2)
            return 1;
        int c = min(grid.size(),grid[0].size());
        vector<int> v(c,0);
        v[0]=1;
        
        
        int count = 0;
        for(int k=1;k<c;k++){
        for (int i = 0; i < grid.size() - k; i++){
            for (int j = 0; j < grid[0].size() - k; j++){
                cout<<check(grid,i,j,k)<<" ";
                if(check(grid, i,j,k)) v[k]=1;
                 if(v[k]==1) continue;
            }
                  if(v[k]==1) continue;
        }
            
    }
        for(int i=v.size()-1;i>=0;i--){
           if(v[i]) return i+1;
           // cout<<v[i]<<" ";
        } 
        return 1;
    }
   
};
