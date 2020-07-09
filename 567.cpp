class Solution {
public:
    bool checkInclusion(string p, string s) {
        if(s.length()==0)
        {
            return false;
        }
        if(s.length()<p.length())
        {
            return false;
        }
        unordered_map<char,int>m;
        for(int i=0;i<p.length();i++)
        {
            m[p[i]]++;
        }
        int count=0;
        
        unordered_map<char,int>visited;
        int start=0,end=0;
        while(start<=s.length()-p.length())
        {
            if(m.find(s[end])==m.end())
            {
                end++;
                start=end;
                visited.clear();
                count=0;
            }
            else
            {
                visited[s[end]]++;
                if(visited[s[end]]<=m[s[end]])
                {
                    count++;
                    if(count==p.length())
                    {
                       return true;
                    }
                }
                else if(visited[s[end]]>m[s[end]])
                {
                    while(s[start]!=s[end])
                    {
                        visited[s[start]]--;
                        start++;
                        count--;
                    }
                    visited[s[start]]--;
                    start++;
                }
                end++;
            }
        }
        return false;;
    }
};
