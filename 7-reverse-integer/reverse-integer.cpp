class Solution {
public:
    int reverse(int x) {
        int digit=0;
        int y=0;
        while(x!=0)
        {
            digit=x%10;
            if((y<INT_MIN/10)||(y>INT_MAX/10))
            {
                return 0;
            }
            y=y*10+digit;
            x=x/10;
        }
        return y;
    }
};