//BFS solution same as "number of islands" approach
//8ms

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        queue<pair<int,int>>q;
        int level=0;
        int count=0,count2=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                    level++;
                }
                if(grid[i][j]==1)
                    count2++;
            }
        }
        int ans=0;
        while(!q.empty())
        {
            int temp=0;
            for(int i=0;i<level;i++)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                 if(x>0 && grid[x-1][y]==1)
                    q.push({x-1,y}),grid[x-1][y]=2,temp++,count++;
                 if(x<(grid.size()-1) && grid[x+1][y]==1)
                    q.push({x+1,y}),grid[x+1][y]=2,temp++,count++;
                 if(y>0 && grid[x][y-1]==1)
                    q.push({x,y-1}),grid[x][y-1]=2,temp++,count++;
                 if(y<(grid[0].size()-1) && grid[x][y+1]==1)
                    q.push({x,y+1}),grid[x][y+1]=2,temp++,count++;
                
            }
            ans++;
            level=temp;
        }
        if(count2==0)
            return 0;
        else if(count==count2)
            return ans-1;
        else
            return -1;
    }
};
