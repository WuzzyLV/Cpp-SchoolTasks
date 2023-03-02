#include <vector>
#include <iostream>

using namespace std;

// Works but veeeeeeery slow
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++){
            for (int j = 0; j < nums.size(); j++){
                if(i==j){   continue;   }
                if (nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return nums;
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

    vector<int> vec = {3,2,4};
    cout << printVec(sol.twoSum(vec, 6)) << endl;

    return 0;
}
    



/////////////////////////////////////