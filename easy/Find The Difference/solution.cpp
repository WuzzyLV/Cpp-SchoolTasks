class Solution {
public:
    char findTheDifference(string s, string t) {
        int len = s.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for(int i=0; i<len; i++){
            if(s[i]!=t[i])
            return t[i];
        }
        return t[len];
    }
};