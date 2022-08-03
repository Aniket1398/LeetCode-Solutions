class Solution {
public:
      static bool cmp(vector<int> a, vector<int> b){
        return a[0] < b[0];
    }
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>>ans;
        int d=0;
        for(int i=0;i<rows;++i)
        {
            for(int j=0;j<cols;++j)
            {
                d=abs(i-rCenter)+abs(j-cCenter);
                ans.push_back({d,i,j});
            }
        }
        sort(ans.begin(),ans.end(),cmp);
        for(vector<int> &i:ans) i.erase(i.begin());
        return ans;
    }
};