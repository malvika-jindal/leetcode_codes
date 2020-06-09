//partition labels
//4ms 

class Solution {
public:
    vector<int> partitionLabels(string S) {
        unordered_map<char,int>m;
        for(int i=0;i<S.length();i++)
        {
            m[S[i]]=i;
        }
        vector<int>v;
        int maxi=m[S[0]];
        int start=-1;
        for(int i=0;i<S.length();i++)
        {
            if(maxi==i && i==m[S[i]])
            {
                v.push_back(maxi-(start));
                start=maxi++;
                maxi=m[S[i+1]];
            }
            else if(maxi<m[S[i]] && i<maxi)
            {
                maxi=m[S[i]];
            }
        }
        return v;
    }
};
