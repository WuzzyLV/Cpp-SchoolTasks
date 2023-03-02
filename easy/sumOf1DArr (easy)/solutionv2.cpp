#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {	
        vector<int> res;

        int count=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            count=count+nums[i];
            res.push_back(count);
        }
        return res;
    }
};


//////////// manual testing //////////

int printVec(vector<int> vec){
    for(int i : vec){
        cout<< i << " ";
    }
    cout <<endl;
}

int main(int argc, char const *argv[]){
    
    cout<< "starting" <<endl;

    Solution solution;

    vector<int> test;
    for(int i =1;i<=5;i++){
        test.push_back(i);
    }
    // 1,1,1,1,1
    //test.assign(5,1);
    printVec(test);

    vector<int> res= solution.runningSum(test);

    printVec(res);

    return 0;
}

/////////////////////////////////////