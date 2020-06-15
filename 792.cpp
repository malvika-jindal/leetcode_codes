//436ms; better than 54%; Time complexity: N*K

bool check(string s,string t)
{
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
class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int count=0;
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        unordered_map<string,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            if(check(it->first,S))
                count+=m[it->first];
        }
        return count;
    }
};
