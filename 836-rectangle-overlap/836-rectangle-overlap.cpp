class Solution {
public:
    bool isRectangleOverlap(vector<int>& a1, vector<int>& a2) {
        int x1=a1[0],x2=a1[2],y1=a1[1],y2=a1[3];
        int l1=a2[0],l2=a2[2],m1=a2[1],m2=a2[3];
        if(l1>=x2 or x1>=l2)
            return false;
        if(m1>=y2 or y1>=m2)
            return false;
        return true;
    }
};