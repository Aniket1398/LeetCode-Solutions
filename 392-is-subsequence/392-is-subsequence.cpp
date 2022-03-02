class Solution {
public:
    bool isSubsequence(string s, string t) {
        int jj=s.size();
        int ll=t.size();
        int i=0,j=0;
        while(i<jj and j<ll)
        {
            if(s[i]==t[j])
            {
                i++;
            }
            j++;
        }
        return i==jj ? 1:0;
    }
};