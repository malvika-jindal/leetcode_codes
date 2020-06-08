//Count the number of islands
//solved by bfs
//24ms 

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int count=0;
        queue<pair<int,int>>q;
        if(grid.size()==0)
        {
            return 0;
        }
        bool visited[grid.size()][grid[0].size()];
        memset(visited,0,sizeof(visited));
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(q.empty() && grid[i][j]=='1' && visited[i][j]==0)
                {
                    q.push({i,j});
                    count++;
                }
                
                while(!q.empty())
                {
                    int x=q.front().first;
                    int y=q.front().second;
                    q.pop();
                    if(x>0 && grid[x-1][y]=='1' && visited[x-1][y]==0)
                        q.push({x-1,y}),visited[x-1][y]=1;
                     if(x<(grid.size()-1) && grid[x+1][y]=='1'&&visited[x+1][y]==0)
                        q.push({x+1,y}),visited[x+1][y]=1;
                     if(y>0 && grid[x][y-1]=='1'&&visited[x][y-1]==0)
                        q.push({x,y-1}),visited[x][y-1]=1;
                     if(y<(grid[0].size()-1) && grid[x][y+1]=='1'&&visited[x][y+1]==0)
                        q.push({x,y+1}),visited[x][y+1]=1;

                }
            }
            
        }
        return count;
    }
};
