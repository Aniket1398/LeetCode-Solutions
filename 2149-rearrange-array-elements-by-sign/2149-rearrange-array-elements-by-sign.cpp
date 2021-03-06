class Solution {
public:
    vector<int> rearrangeArray(vector<int>& A) {
        vector<int> neg, pos, ans;
        for (int n : A) {
            if (n > 0) pos.push_back(n);
            else neg.push_back(n);
        }
        for (int i = 0; i < neg.size(); ++i) {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};