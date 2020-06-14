//combination of binary search and insert position
//12ms runtime

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(matrix.size()==0 || matrix[0].size()==0)
        {
            return false;
        }    
        int start=0,end=matrix.size()-1,ans=0;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(matrix[mid][0]==target)
                return true;
            else if(matrix[mid][0]<target)
                ans=mid,start=mid+1;
            else if(matrix[mid][0]>target)
                end=mid-1;
        }
      
        start=0, end=matrix[0].size()-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(matrix[ans][mid]==target)
                return true;
            else if(matrix[ans][mid]<target)
                start=mid+1;
            else if(matrix[ans][mid]>target)
                end=mid-1;
        }
        return false;
    }
};
