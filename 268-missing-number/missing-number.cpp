class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        vector<int> freq(nums.size()+1,0);
        for(int i=0;i<nums.size();i++)
        {
            int index=nums[i];
            freq[index]++;
        }
        for(int i=0;i<freq.size();i++)
        {
            if(freq[i]==0)
            {
                return i;
            }
        }
        return -1;
    }
};