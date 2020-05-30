/*This one is the no the optimized code. Time complexity:O(nlogn); space complexity:O(n)*/

bool compare(vector<int>& a,vector<int>& b)
{
    return a[1]<b[1];
}
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> p;
        sort(trips.begin(),trips.end(),compare);
        p.push(make_pair(trips[0][2],0));
        int seat=trips[0][0];
        for(int i=1;i<trips.size();i++)
        {
            while(!p.empty() && trips[i][1]>=p.top().first)
            {
                seat-=trips[p.top().second][0];
                p.pop();
            }
            seat+=trips[i][0];
            if(seat>capacity)
                return false;
            p.push(make_pair(trips[i][2],i));
        }
        return true;
    }
};
