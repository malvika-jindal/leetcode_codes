// K Closest Points to Origin
//288ms; better than 90% solutions in terms of time complexity
//You can also use multimap and it gets sorted by itself. 

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<pair<float,int>>v;
        for(int i=0;i<points.size();i++)
        {
            float x=sqrt(points[i][0]*points[i][0]+points[i][1]*points[i][1]);
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
         vector<vector<int>>ans;
        for(int i=0;i<K;i++)
        {
            ans.push_back(points[v[i].second]);
        }
                        return ans;
    }
}; 
