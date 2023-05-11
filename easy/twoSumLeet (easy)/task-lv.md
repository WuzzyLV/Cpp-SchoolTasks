# [1. Two Sum Easy](https://leetcode.com/problems/two-sum/description/)
Ņemot vērā veselu skaitļu masīvu un veselu skaitļu mērķi, atgriež abu skaitļu indeksus tā, lai tie saskaitītu mērķi.
Varat pieņemt, ka katrai ievadei būtu tieši viens risinājums, un jūs nedrīkstat izmantot vienu un to pašu elementu divreiz.
Jūs varat atgriezt atbildi jebkurā secībā.

 

## 1. piemērs:
    Ievade: cipari = [2,7,11,15], mērķis = 9
    Izvade: [0,1]
    Paskaidrojums: Tā kā skaitļi[0] + skaitļi[1] == 9, mēs atgriežam [0, 1].

## 2. piemērs:
    Ievade: cipari = [3,2,4], mērķis = 6
    Izvade: [1,2]

## 3. piemērs:
    Ievade: cipari = [3,3], mērķis = 6
    Izvade: [0,1]
 

### Ierobežojumi:
    2 <= nums.length <= 104
    -109 <= cipari[i] <= 109
    -109 <= mērķis <= 109
    Ir tikai viena derīga atbilde.
 


# Rezultāts
    Izpildes laiks:
    4 ms
    Beats:
    99,24%
    Atmiņa:
    11,1 MB
    Beats:
    17,13%
    
    ## Kods 
    ```cpp
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
    ```
