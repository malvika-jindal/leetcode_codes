//longest common prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string s="";
        if(strs.size()==0)
        {
            return "";
        }
        int x=0,j=0;
        while(j<strs[0].length())
        {
            if(strs[0]=="")
            {
                return "";
            }
            char alpha=strs[0][j];
            for(int i=1;i<strs.size();i++)
            {
                if(j>=strs[i].length() || strs[i][j]!=alpha)
                {
                    return s;
                }
            }
            s+=alpha;
            j++;
        }
        return s;
    }
};
