#include <iostream>

using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
    int count = 0, balanced=0; 
    
    for (char c : s) {
        if (c == 'L') {
            count++;
        } else {
            count--;
        }
        if (count == 0) {
            balanced++;
        }
    }
    return balanced; 
    }
};