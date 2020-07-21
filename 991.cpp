class Solution {
public:
    int brokenCalc(int X, int Y) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int count=0;
        
        while(Y>X)
        {
            if(!(Y%2) && Y>X)
                Y/=2;
            else
                Y+=1;
            count++;
        }
        return count+X-Y;
    }
};
