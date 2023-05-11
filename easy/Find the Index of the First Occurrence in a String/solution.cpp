class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();

        for(int i=0; i<=n-m; i++) {
            int count = 0;
            for(int j=0; j<m; j++) {
                if(haystack[i+j] == needle[j]) {
                    count++;
                }
                else
                    break;
            }
            if(count == m)
                return i;
        }
        return -1;
    }
};