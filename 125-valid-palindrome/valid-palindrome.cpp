class Solution {
public:
    bool isPalindrome(string s)
    {
        vector<char> temp;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9'))
            {
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]>='A'&&temp[i]<='Z')
            {
                temp[i]=temp[i]-'A'+'a';
            }
        }
        int start=0;
        int end=temp.size()-1;
        while(start<=end)
        {
            if(temp[start]!=temp[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};