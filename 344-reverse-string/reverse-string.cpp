class Solution {
public:
    void reverse(int start,int end,vector<char>& s)
    {
        if(start>end)
        {
            return;
        }
        swap(s[start++],s[end--]);
        return reverse(start,end,s);
    }
    void reverseString(vector<char>& s)
    {
        int start=0;
        int end=s.size()-1;
        reverse(start,end,s);
    }
};