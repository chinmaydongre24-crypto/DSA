class Solution {
public:
    int pattern(string sub)
    {
        if(sub.length()==1)
        {
            return 1;
        }
        int cnt1=0,cnt0=0;
        for(int i=0;i<sub.length();i++)
        {
            if(sub[i]=='1')
            {
                cnt1++;
            }
            if(sub[i]=='0')
            {
                cnt0++;
            }
        }
        if(cnt1==cnt0 || cnt1==cnt0-1||cnt1==cnt0+1)
        {
            return 1;
        }
        return 0;        
    }
    int countValidPrefixes(string s)
    {
        int cnt=0;
        for(int i=1;i<=s.length();i++)
        {
            cnt+=pattern(s.substr(0,i));
        }
        return cnt;
    }
}; 