//The optimized solution for car-poolng ques. Time : O(n), space:O(1)
//This trick is used in many ques which involves queries

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int arr[1001];
        for(int i=0;i<1001;i++)
        {
            arr[i]=0;
        }
        int maxi=0;
        for(int i=0;i<trips.size();i++)
        {
            arr[trips[i][1]]+=trips[i][0];
            arr[trips[i][2]]-=trips[i][0];   
            maxi=max(maxi,trips[i][2]);
        }
        int sum=0;
        for(int i=0;i<=maxi;i++)
        {
            sum+=arr[i];
            if(sum>capacity)
            {
                return false;
            }
        }
        return true;
    }
};
