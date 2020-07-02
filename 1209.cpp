class Solution {
public:
    string removeDuplicates(string s, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stack<pair<char,int>>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push({s[i],1});
            }
            else
            {
                if(st.top().first==s[i])
                {
                    (st.top().second)++;
                }
                else
                {
                    st.push({s[i],1});
                }
                if(st.top().second==k)
                {
                    st.pop();
                }
            }
        }
        string ans="";
        while(!st.empty())
        {
            char a=st.top().first;
            for(int i=0;i<st.top().second;i++)
            {
                ans+=a;
            }
            st.pop();
        }
         reverse(ans.begin(),ans.end());
        return ans;
    }
};
