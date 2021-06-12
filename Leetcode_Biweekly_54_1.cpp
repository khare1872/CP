class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> v;
        for(int i=0;i<ranges.size();i++){
            int j = ranges[i][0];
            while(j<=ranges[i][1]){
                v.push_back(j);
                j++;
            }
        }
        sort(v.begin(),v.end());
        for(int i=left;i<=right;i++){
            if(find(v.begin(),v.end(),i)==v.end()) return false;
        }
        return true;
        
    }
};
