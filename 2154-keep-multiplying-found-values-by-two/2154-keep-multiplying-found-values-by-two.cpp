class Solution {
public:
    
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int num=0,k=0;
        for(int i=0;i<n;++i)
        {
            if(nums[i]==original)
            {
                original*=2;
                 
                if(original!=nums[i])
                {
                    k=original;
                }
                
            }
        }
        return original;
        
    }
};