class SubrectangleQueries {
public:
    vector<vector<int>>rec;
    vector<vector<int>>update;
    vector<int>v;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rec=rectangle;
        v={0,0,0,0,0};        
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        v[0]=row1;
        v[1]=row2;
        v[2]=col1;
        v[3]=col2;
        v[4]=newValue;
        update.push_back(v);
    }
    
    int getValue(int row, int col) {
        
        for(int i=update.size()-1;i>=0;i--){
            if(row>=update[i][0] && row<=update[i][1] && col>=update[i][2] && col<=update[i][3]){
                return update[i][4];
            }
        }
        return rec[row][col];
        
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */