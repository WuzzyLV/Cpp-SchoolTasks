#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> result;
        result.push_back(celsius*1.8+32);
        result.push_back(celsius+273.15);
        return result;
    }
};