class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double,int>mp;
        long long count=0;
        for(int i=0;i<rectangles.size();++i)
        {
            double ratio=(double)rectangles[i][0]/(double)rectangles[i][1];
            mp[ratio]++;
        }
        
        for(auto it:mp)
        {
            double x=it.second;
            count+=(long)(x*(x-1))/2;
        }
        return count;
    }
};