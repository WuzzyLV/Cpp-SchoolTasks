class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            int a=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j])
                a++;
            }
            answer.push_back(a);
        }
        return answer;
    }
};