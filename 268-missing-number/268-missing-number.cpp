class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int tot=n*(n+1)/2;
        int expected=0;
        for(int num:nums)
        {
            expected+=num;
        }
        return tot-expected;
    }
};