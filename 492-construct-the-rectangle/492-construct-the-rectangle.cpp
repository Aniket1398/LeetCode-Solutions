class Solution {
public:
    vector<int> constructRectangle(int area) {
        int minm=1;
        vector<int>p;
        for(int i=1;i*i<=area;++i)
        {
            if(area%i==0)
            {
                minm=i;
            }
        }
        p.push_back(area/minm);
        p.push_back(minm);
        
        return p;
    }
};