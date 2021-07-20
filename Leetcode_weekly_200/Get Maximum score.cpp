class Solution {
public:
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        long long int ansa = 0;
        long long int ansb = 0;
        int i =0;
        int j =0;
        while(i<nums1.size()&&j<nums2.size()){
            if(nums1[i]<nums2[j]){
                ansa+=nums1[i];
                i++;
            }
            else if(nums1[i]>nums2[j]){
                ansb+=nums2[j];
                j++;
            }
            else {
                long long int temp = max(ansa,ansb);
                ansa=temp+nums1[i];
                ansb=temp+nums2[j];
                i++;
                j++;
            }
        }
        while(i<nums1.size()) {
            ansa+=nums1[i];
            i++;
        }
        while(j<nums2.size()){
            ansb+=nums2[j];
            j++;
        }
        return max(ansa,ansb)%1000000007;
    }
};
