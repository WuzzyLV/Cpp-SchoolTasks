# Bomb the base
## Problem
In Chefland, there are $N$ houses numbered from 1 to N, i-th house has a defence system having strength $A_i$.

Chef suspects a bomb drop on one of the houses very soon. A bomb with attack strength X can destroy the i-th house, if the defence system of the i-th house $A_i$, is strictly less than $X$.

Also, when the i-th house is destroyed due to the bomb, all houses with indices j such that 1≤ j < i get destroyed as well irrespective of their defence system.

Given one bomb with attack strength X, find the maximum number of houses that can get destroyed.

## Input Format
- The first line will contain T - the number of test cases. Then the test cases follow.
- First line of each test case contains 2 integers, N, X.
- Second line of test case contains N space separated integers $A_1$, $A_i$ ... $A_n$.
## Output Format
For each test case, output in a single line the maximum number of houses that can get destroyed if the bomb can hit any house.

## Constraints
 - 1≤T≤100
 - 1≤N≤10^5
 - 1≤X≤10^9
 - 1≤$A_i$≤10^9
 - Sum of N over all test cases does not exceed 10^5

 ## Sample 1:
Input | Output
-|-
2|6
8 6|0
4 1 6 1 6 5 6 8
2 1
3 5

## Explanation:
Test Case 1: The bomb can only destroy houses 1,2,4, and 6.
- If it hits house 1, only house 1 is destroyed.
- If it hits house 2, houses 1 and 2 are destroyed.
- If it hits house 4, houses 1,2,3 and 4 are destroyed.
- If it hits house 6, houses 1,2,3,4,5, and 6 are destroyed.
The maximum number of destroyed houses is 6.

## Test Case 2:
 The bomb cannot destroy any of the houses as the defence system of each house is not lesser than attack power of bomb. Thus, the total number of destroyed houses is 0.

 ```
 #include <iostream>
using namespace std;

// houses get destroyed systematically and yes
// 
int main() {
    int runAmount, n, bomb,closestHouse, housesDestroyed;
    cin>>runAmount;
	while(runAmount--){
        closestHouse=0;
        housesDestroyed=0;
        cin>>n>>bomb;
        int houses[n];
        for(int i =0;i<n;i++){
            cin>>houses[i];
            if(houses[i]>closestHouse &&houses[i]<=bomb){
                closestHouse=houses[i];
            }
        }
        cout<<"closestHouse: "<<closestHouse<<endl;
        if(closestHouse==0){
            cout<<0<<endl;
            continue;
        }
        housesDestroyed++;
        for(int i =0;i<n;i++){
            if(houses[i]<closestHouse){
                cout<<"houses[i]: "<<houses[i]<<"destroyed"<<endl;
                housesDestroyed++;
            }
        }

        cout<<housesDestroyed<<endl;
    }
	return 0;
}

 ```