class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        vector<int>ans;
        ans.push_back(first);
        int k;
        for(int i=0;i<encoded.size();++i)
        {
            k=ans[i]^encoded[i];
            ans.push_back(k);
        }
        return ans;
    }
};
// vector<int>ans;
//         int x;
//         ans.push_back(first);
//         for(int i=0;i<encoded.size();i++){
//              x=ans[i]^encoded[i];
//             ans.push_back(x);
//         }
//        return ans; 
//     }