class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if(s.length()!=t.length())
        {
            return false;
        }
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        for(int i=0;i<s.length();i++)
        {
            int index=s[i]-'a';
            hash1[index]++;
            int ind=t[i]-'a';
            hash2[ind]++;
        }
        for(int i=0;i<26;i++)
        {
            if(hash1[i]!=hash2[i])
            {
                return false;
            }
        }
        return true;
    }
};