//better than 100% solutions

class Solution {
public:
    bool isSubsequence(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int i=0,j=0,count=0;
        while(j<t.length())
        {
            if(s[i]==t[j])
                i++,j++,count++;
            else
                j++;
            
            if(count==s.length())
                return true;
        }
        if(count==s.length())
            return true;
        return false;
    }
};
