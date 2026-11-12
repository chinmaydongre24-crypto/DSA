class Solution {
public:
    char findTheDifference(string s, string t)
    {
        char hash1[26]={0};
        char hash2[26]={0};
        for(int i=0;i<s.length();i++)
        {
            int index=s[i]-'a';
            hash1[index]++;
        }
        for(int i=0;i<t.length();i++)
        {
            int index=t[i]-'a';
            hash2[index]++;
        }
        for(int i=0;i<26;i++)
        {
            if(hash2[i]!=hash1[i])
            {
                char ans=i+'a';
                return ans;
            }
        }
        return 0;
    }
};