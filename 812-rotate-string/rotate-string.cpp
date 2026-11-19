class Solution {
public:
    void rotate(string &s)
    {
        string ans=s;
        for(int i=0;i<s.length();i++)
        {
            ans[(i+1)%s.length()]=s[i];
        }
        s=ans;
    }
    bool rotateString(string s, string goal)
    {
        for(int i=0;i<s.length();i++)
        {
            cout<<s<<" ";
            if(s==goal)
            {
                return true;
            }
            rotate(s);
        }
        return false;
    }
};