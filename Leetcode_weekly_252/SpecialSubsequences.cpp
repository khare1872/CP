class Solution {
public:
    int countSpecialSubsequences(vector<int>& s) {
        long long int aCount = 0;
        long long int bCount = 0;
        long long int cCount = 0;
    for (unsigned int i = 0; i < s.size(); i++) {
        if (s[i] == 0)
            aCount = (1 + (2 * aCount)%1000000007)%1000000007;
        else if (s[i] == 1)
            bCount = ((aCount%1000000007) + 2 * (bCount%1000000007))%1000000007;
        else if (s[i] == 2)
            cCount = (bCount%1000000007 + 2 * (cCount%1000000007))%1000000007;
    }
 
    return cCount%1000000007;
        
    }
};
