//Time complexity=O(N^2); space complexity=O(N)

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int col_max[grid.size()];
        int row_max[grid[0].size()];
        for(int i=0;i<grid.size();i++)
        {
            col_max[i]=*(max_element(grid[i].begin(),grid[i].end()));
        }
         for(int i=0;i<grid[0].size();i++)
        {
            int a=0;
             for(int j=0;j<grid.size();j++)
             {
                 a=max(a,grid[j][i]);
             }
             row_max[i]=a;
        }
        int sum=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(min(col_max[i],row_max[j])>grid[i][j])
                    sum+=min(col_max[i],row_max[j])-grid[i][j];
            }
        }
        return sum;
    }
};
