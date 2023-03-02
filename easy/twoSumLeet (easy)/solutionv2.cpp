#include <vector>
#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        int size=nums.size();
        for (int i = 0; i < size; i++){
            if (hash.find(nums[i])!=hash.end()){
                return {hash[nums[i]], i};
            }
            hash.insert({ (target - nums[i]), i });
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