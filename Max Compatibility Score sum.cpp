class Solution {
public:
    vector<int> v;
    int solve(vector<vector<int>>& students,vector<vector<int>>& mentors,int i){
        if(i>=students.size()) return 0;
        
        int ans = 0;
        for(int k =0;k<mentors.size();k++){
            if(v[k]!=1){
                v[k]=1;
                int sum=0;
               for(int j =0;j<students[0].size();j++){
                sum+=(students[i][j]==mentors[k][j]);
              }
                      sum+=solve(students,mentors,i+1);
                      ans=max(sum,ans);
                      v[k]=0;
            }
        }
                      return ans;
    }
    
    

    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        
        v.resize(students.size(),0);
        v.clear();
        return solve(students,mentors,0);
    }
       
};
