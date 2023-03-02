#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0, sum;
        int m =accounts.size(); int n=accounts[0].size();
        for(int i =0; i<m; i++){
            sum=0;
            for(int j = 0; j<n; j++){
                sum+=accounts[i][j];
            }
            if(sum>max){
                max=sum;
            }
        }
        return max;
    }
};

//////////// manual testing //////////

int printVec(vector<vector<int>> vec){
    for(vector<int> i : vec){
        for(int val : i){
            cout<< val << " ";
        }
        cout <<endl;
    }
    cout <<endl;
}

int main(int argc, char const *argv[]){
    Solution sol;
    /// ///// //// ////

    vector<vector<int>> vec={
        {1,2,3},
        {3,4,5}
    };

    printVec(vec);

    cout<< sol.maximumWealth(vec) << endl;
    

    return 0;
}

/////////////////////////////////////