class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>ans;
        vector<int>helper;
        vector<int>v;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==key)
            {
                helper.push_back(i);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<helper.size();j++)
            {
                if(abs(i-helper[j])<=k)
                {
                    ans.push_back(i);
                    break;
                }
            }
        } 
        
        
        
            return ans;
    }
 };
//  vector<int> inx;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==key)  inx.push_back(i);
//         }
//         int n = nums.size();
//         vector<int> res;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<inx.size(); j++){
//                 if(abs(i-inx[j]) <= k){
//                     res.push_back(i);
//                     break;
//                 }
//             }
//         }
//         return res;
//     }