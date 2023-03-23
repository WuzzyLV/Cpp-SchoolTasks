#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;        
        for(int i =0;i<sentences.size();i++){
            int count=0;
            if(sentences[i].length()==0){
                continue;
            }
            count++;
            for(int j =0;j<sentences[i].length();j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            if(count>max){
                max=count;
            }
        }
        return max;
    }
};