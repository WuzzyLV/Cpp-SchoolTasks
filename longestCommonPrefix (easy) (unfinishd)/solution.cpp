#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix="";
        char curr;
        int i=0;
        
        while (true){
            if (i==0){
                curr=strs[i][prefix.length()];
            }
            cout<< i << strs[i][prefix.length()] << "==" << curr <<endl;
            if(strs[i][prefix.length()] == curr){
                if(i>=strs.size()-1){
                    i=0;
                    prefix+=curr;
                }else{
                    i++;
                }
                continue;
            }
            return prefix;
        }
    }
};
















//////////// manual testing //////////

int print2DVec(vector<vector<int>> vec){
    for(vector<int> i : vec){
        for(int val : i){
            cout<< val << " ";
        }
        cout <<endl;
    }
    cout <<endl;
}
int printVec(vector<int> vec){
    for(int i : vec){
        cout<< i << " ";
    }
    cout <<endl;
}

int main(int argc, char const *argv[]){
    Solution sol;
    /// ///// //// ////


    

    return 0;
}

/////////////////////////////////////