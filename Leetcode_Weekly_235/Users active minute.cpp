class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int,set<int>> m;
        for(int i=0;i<logs.size();i++){
            m[logs[i][0]].insert(logs[i][1]);
        }
        map<int,int> ans;
        vector<int> res(k,0);
        for(auto element:m){
            ans[element.second.size()]++;
        }
        for(int i = 1;i<=k;i++){
            if(ans.find(i)==ans.end()) res[i-1]=0;
            else res[i-1]=ans[i];
        }
        return res;
        
    }
};
