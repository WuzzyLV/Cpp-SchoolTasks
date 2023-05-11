class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;

        if(s.size()==1) 
            return 1;
        
        for(int i=s.size()-1; i>=0; i--){
            if(i!=0){
                if(s[i]==' ')
                   continue;
                if(s[i]!=' ' && s[i-1]==' '){
                    count++;
                    break;
                } 
                else    
                    count++;
            }
            if(i==0){
                if(s[0]!=' ') count++;
            }
        }
        return count;
    }
};