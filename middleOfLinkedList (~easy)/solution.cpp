#include <vector>
#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* start=head;
        ListNode* temp=start->next;
        int len=1;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        int startI=len/2;
        int endI= len+2;
        temp=start;
        for(int i =0;i<len;i++){
            if(i==startI){
                start=temp;
            }else if(i==endI){
                temp->next=NULL;
            }
            temp=temp->next;
        }
        return start;
    }
};


// dont wanna bother
//////////// manual testing //////////
// int print2DVec(vector<vector<int>> vec){
//     for(vector<int> i : vec){
//         for(int val : i){
//             cout<< val << " ";
//         }
//         cout <<endl;
//     }
//     cout <<endl;
// }
// int printVec(vector<int> vec){
//     for(int i : vec){
//         cout<< i << " ";
//     }
//     cout <<endl;
// }

// int main(int argc, char const *argv[]){
//     Solution sol;
//     /// ///// //// ////


//     cout <<sol.xxxx() << endl;
    

//     return 0;
// }

/////////////////////////////////////