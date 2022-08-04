class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;++i)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>1)
                return true;
        }
        return false;
    }
};