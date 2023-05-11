class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit,times = 1,sum=0;
        while(n!=0)
        {
            digit = n % 10;
            sum += digit;
            times *= digit;
            n = n/10;
        }
        int res = times - sum;
        return res;   
    }
};