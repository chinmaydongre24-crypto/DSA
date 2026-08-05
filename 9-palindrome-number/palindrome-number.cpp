class Solution {
public:
    bool isPalindrome(int x)
    {
        int palindrome=0;
        int digit=0,original=x;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            digit=x%10;
            if((palindrome<INT_MIN/10)||(palindrome>INT_MAX/10))
            {
                return false;
            }
            palindrome=palindrome*10+digit;
            x=x/10;
        }
        if(original!=palindrome)
        {
            return false;
        }
        return true;
    }
};