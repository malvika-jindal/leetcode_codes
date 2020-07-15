class Solution {
public:
    string reverseWords(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stringstream ss(s);
        string word;
        s="";
        while(ss>>word)
           s=word+" "+s;
        if(s.length())
            s.pop_back();
        return s;
    }
};
