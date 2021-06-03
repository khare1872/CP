class Solution {

public:
int longestBeautifulSubstring(string word) {

    int ans = 0;
    int count=0;
    int fa=0;
    int fe=0;
    int fo=0;
    int fi=0;
    int fu=0;
    if(word[0]=='a') {
        fa=1;
        count++;
    }
    
    for(int i =1;i<word.length();i++){
        if(word[i]=='a') fa=1;
        if(word[i]=='e'&&fa) fe=1;
        if(word[i]=='i'&&fa&&fe) fi=1;
        if(word[i]=='o'&&fe&&fa&&fi) fo=1;
        if(word[i]=='u'&&fa&&fe&&fo&&fi) fu=1;

        if(word[i]>=word[i-1]) count++;
        else {
            if(fa&&fe&&fi&&fo&&fu){
                
                ans=max(ans,count);
            }
                fa=0;
                fe=0;
                fo=0;
                fi=0;
                fu=0;
            if(word[i]=='a'){
                fa=1;
                count=1;
            }
            else count = 0;
        }
		//Case when last letter is u itself.
        if(fa&&fe&&fi&&fo&&fu)
         ans=max(ans,count);
    }
    return ans;
    
}
};
