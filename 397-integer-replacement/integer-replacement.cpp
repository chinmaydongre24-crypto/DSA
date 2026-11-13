class Solution {
public:
    int integerReplacement(int n)
    {
        int count=0;
        long long int num=n;
        while(num!=1)
        {
            if( (num&1) == 0)
            {
                num=num/2;
                count++;
            }
            else
            {
                long long int next=num-1;
                next/=2;
                if((next&1)==0 || num==3)
                {
                    num=num-1;
                    count++;
                }
                else
                {
                    num=num+1;
                    count++;
                }
            }
        }
        return count;
    }
};