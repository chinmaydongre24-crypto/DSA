class Solution {
public:
    string largestOddNumber(string num)
    {
        string s="";
        for(int i=num.length()-1;i>=0;i--)
        {
            int index=num[i]-'0';
            if(index%2!=0)
            {
                s=num.substr(0,i+1);
                return s;
            }
        }
        return s;
    }
};