class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& a) {
        vector<vector<int>>ans;
        unordered_map<int, vector<int>>m;
        for(int i=0; i<a.size(); i++){
            m[a[i]].push_back(i);
            if(m[a[i]].size() == a[i]){
                ans.push_back(m[a[i]]);
                m[a[i]].clear();
            }
        }
        return ans;
    }
};