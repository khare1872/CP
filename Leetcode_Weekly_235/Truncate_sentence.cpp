class Solution {
public:
    string truncateSentence(string s, int k) {
        int c =0;
        string a = "";
        for(int i = 0;i<s.length();i++){
            if(s[i]==' ') c++;
            if(c>=k) return a;
            a+=s[i];
            
        }
       return a; 
    }
};
