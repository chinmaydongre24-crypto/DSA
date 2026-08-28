class Solution {

private:

    bool checkequal(int a[26], int b[26])
    {
        for(int i = 0; i < 26; i++)
        {
            if(a[i] != b[i])
            {
                return false;
            }
        }

        return true;
    }

public:

    bool checkInclusion(string s1, string s2)
    {
        int count1[26] = {0};

        // Frequency of s1
        for(int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int windowsize = s1.length();

        // s1 cannot fit inside s2
        if(windowsize > s2.length())
        {
            return false;
        }

        int count2[26] = {0};

        // First window
        int i = 0;

        while(i < windowsize)
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        // Check first window
        if(checkequal(count1, count2))
        {
            return true;
        }

        // Slide the window
        while(i < s2.length())
        {
            // Remove character leaving the window
            int oldindex = s2[i - windowsize] - 'a';
            count2[oldindex]--;

            // Add new character
            int newindex = s2[i] - 'a';
            count2[newindex]++;

            // Check current window
            if(checkequal(count1, count2))
            {
                return true;
            }

            i++;
        }

        return false;
    }
};