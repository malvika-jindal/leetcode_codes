bool check(int L)
{
    int x=0,n=L;
    while(L)
    {
        if(L%2!=0)
            x++;
        L=L>>1;
    }
    if(x == 2 || x == 3 || x == 5 || x == 7 ||x == 11 || x == 13 || x == 17 || x == 19)
        return true;
    return false;
}

class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int count=0;
        for(int i=L;i<=R;i++)
        {
            if(check(i))
                count++;
        }
        return count;
    }
};
