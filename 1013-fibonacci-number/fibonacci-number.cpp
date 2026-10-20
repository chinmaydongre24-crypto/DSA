class Solution {
public:
    int fib(int n)
    {
        int a=1,b=0;
        for(int i=1;i<=n;i++)
        {
            int temp=b;
            b=a+b;
            a=temp;
        }
        return b;    
    }
};