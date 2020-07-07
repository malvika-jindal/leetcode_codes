class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int start=0;
        int count=0;
        sort(people.begin(),people.end());
        for(int i=people.size()-1;i>=start;i--)
        {
            if(people[i]+people[start]<=limit)
            {
                start++;
            }
            count++;
        }
        return count;
    }
};
