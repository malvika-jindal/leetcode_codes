//better than <35% in terms of tc

static auto _______ = [](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    bool visited[201][201];
    bool check(vector<vector<char>>& board,int i, int j,string word, int index)
    {
        if(index==word.length())
        {
            return true;
        }
        else if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || word[index]!=board[i][j] || visited[i][j]==1)
        {
            return false;
        } 
        else
        {
            visited[i][j]=1;
            bool a =  ((check(board,i-1,j,word,index+1)||
                   check(board,i,j-1,word,index+1)||
                   check(board,i+1,j,word,index+1)||
                   check(board,i,j+1,word,index+1)));
             visited[i][j]=0;
            return a;
        }
    }
    bool exist(vector<vector<char>>& board, string word) {
        int ans=0;
        memset(visited,0,sizeof(visited));
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0])
                {
                    
                    ans=check(board,i,j,word,0);
                    if(ans)
                        return true;
                }
            }
        }
        if(ans)
            return true;
        return false;
    }
};
