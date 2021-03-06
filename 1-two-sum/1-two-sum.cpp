class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>m;
        int num=nums.size();
        for(int i=0;i<num;++i){
            if(m.find(target-nums[i])!=m.end())
            {
                ans.push_back(m[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else
            {
                m[nums[i]]=i;
            }
        }
        return ans;
    }
};