class Solution {
public:
    bool isUgly(int num) {
        
        if(num%2==0 && num)
        {
            while(num%2==0)
                num=num/2;
        }
         if(num%3==0 && num)
        {
            while(num%3==0)
                num=num/3;
        }
         if(num%5==0 && num)
        {
            while(num%5==0)
                num=num/5;
        }
        if(num!=1)
        {
            return false;
        }
        
        return true;
    }
};
