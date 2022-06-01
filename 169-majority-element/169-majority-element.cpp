class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int hero=nums[0];
        int power=1;
        for(int i=0;i<n;++i)
        {
            if(nums[i]==hero)
            {
                power++;
            }
            else{
                power-=1;
                if(power==0)
                {
                    hero=nums[i];
                    power=1;
                }
            }
        }
        return hero;
        
    }
};