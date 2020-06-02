//sliding window and maps. Better than 75% solutions in terms of time complexity.
//check if string contains all binary strings of length k

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<string,bool>m;
        int start=0,end=k-1;
        int count=0;
        if(k>=s.length())
            return false;
        while(start<=s.length()-k)
        {
            string x=s.substr(start,k);
            if(m.find(x)==m.end())
            {
                count++;
                if(count==pow(2,k))
                    return true;
                m[x]=1;
            }
            start++;
        }
        if(count==pow(2,k))
            return true;
        else
            return false;
        return true;
    }
};
