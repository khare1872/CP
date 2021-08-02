class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        set<int> st(nums1.begin(), nums1.end());
        auto sum = 0LL, minSum = 9999999999999LL;
        for(int i=0;i<nums1.size();i++) sum += abs(nums1[i] - nums2[i]);
        for(int i=0;i<nums1.size(); i++){
            auto restSum = sum - abs(nums1[i] - nums2[i]);
            auto it = st.lower_bound(nums2[i]);
            if(it != st.end()) minSum = min(minSum, restSum + abs(*it - nums2[i]));
            if(it != st.begin()) minSum = min(minSum, restSum + abs(*prev(it) - nums2[i]));
        }
        return minSum % 1000000007;
    }
};
