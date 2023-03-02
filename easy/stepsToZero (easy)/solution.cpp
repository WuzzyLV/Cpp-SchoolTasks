#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int i=0;
        while(num!=0){
            if(num%2==0){
                num/=2;
            } else{
                num--;
            }
            i++;
        }
        return i;
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


    cout <<sol.numberOfSteps(8) << endl;
    

    return 0;
}

/////////////////////////////////////