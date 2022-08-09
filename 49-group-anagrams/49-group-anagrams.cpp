class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<map<char,int>,vector<string>>mpp;
        for(auto &str:strs)
        {
            map<char,int>mpp1;
            for(char ch:str)
            {
                mpp1[ch]++;
            }
            mpp[mpp1].push_back(str);
        }
        for(auto &x:mpp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};