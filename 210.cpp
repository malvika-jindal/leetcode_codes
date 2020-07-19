class Solution {
public:
    int visited[10001];
    stack<int>s;
    int flag=0;
    void topo( vector<vector<int>>& adj, int start)
    {
        for(int i=0;i<adj[start].size();i++)
        {
            if(visited[adj[start][i]]==0)
            {
                visited[adj[start][i]]=-1;
                topo(adj,adj[start][i]);
            }
            else if(visited[adj[start][i]]==-1)
            {
                flag=1;
                return;
            }
        }
        visited[start]=1;
        s.push(start);
    }
    vector<int> findOrder(int V, vector<vector<int>>& prerequisites) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<int>>adj(V);
        vector<int>ans;
        memset(visited,0,sizeof(visited));
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i=0;i<V;i++)
        {
            if(visited[i]==0)
            {
                topo(adj,i);
            }
        }
        if(flag)
            return ans;
        while(!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};
