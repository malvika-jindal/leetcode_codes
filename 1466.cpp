class Solution {
public:
    int count;
    void bfs(vector<vector<pair<int,bool>>>& adj, int start, int *visited)
    {
        queue<int>q;
        q.push(start);
        while(!q.empty())
        {
            start=q.front();
            q.pop();
            for(int i=0;i<adj[start].size();i++)
            {
                if(!visited[(adj[start][i]).first])
                {
                    visited[(adj[start][i]).first]=1;
                    q.push((adj[start][i]).first);
                    if((adj[start][i]).second)
                        count++;
                }
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<pair<int,bool>>>adj(n);
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back({connections[i][1],1});
            adj[connections[i][1]].push_back({connections[i][0],0});
        }
         count=0;
        int visited[n];
        memset(visited,0,sizeof(visited));
        
            if(!visited[0])
            {
                visited[0]=1;
                bfs(adj,0,visited);
            }
        
        return count;
    }
};
