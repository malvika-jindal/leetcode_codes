class Solution {
public:
    string removeDuplicates(string S) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string ans="";
        ans+=S[0];
        for(int i=1;i<S.length();i++)
        {
            if(ans.length()==0)
            {
                ans+=S[i];
                i++;
                if(i==S.length())
                    break;
            }
            if(ans[ans.length()-1]==S[i])
                ans.pop_back();
            else
                ans+=S[i];
        }
        return ans;
    }
};
