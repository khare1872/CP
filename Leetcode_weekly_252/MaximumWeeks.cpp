class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        int n = milestones.size()-1;
        sort(milestones.begin(),milestones.end());
        long long int sum =0;
        
        for(auto i:milestones){
            sum+=i;
        }
        if(milestones[n]<=sum-milestones[n]) return sum;
        else {
            return 2*(sum-milestones[n])+1;
        }
    }
};
