//Top K most frequent words
//By using maps and customized compare functions
//24ms; better than 80% solutions

bool compare(pair<int,string>& a,pair<int,string>& b)
{
    if(a.first!=b.first)
    {
        return a.first>b.first;
    }
    else
    {
        return a.second<b.second;
    }
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<string,int>m;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        unordered_map<string,int>::iterator it;
        vector<pair<int,string>>p;
        for(it=m.begin();it!=m.end();it++)
        {
            p.push_back(make_pair((it->second),it->first));
        }
        sort(p.begin(),p.end(),compare);
        vector<string>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(p[i].second);
        }
        return ans;
    }
};
