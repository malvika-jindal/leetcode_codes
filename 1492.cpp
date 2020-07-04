class Solution {
public:
    int kthFactor(int n, int k) {
        int count=2;
        if(k==1)
            return 1;
        k=k-1;
        while(k)
        {
            if(n%count==0)
                k--;
            if(count>n)
                break;
            if(!k)
                return count;
            count++;
        }
        if(k==0)
            return count-1;
        else
            return -1;
    }
};
