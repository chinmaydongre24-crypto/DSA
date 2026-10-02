class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        vector <int> ans(nums.size(),0);
        int number;
        for(int i=0;i<nums.size();i++)
        {
            number=nums[i];
            ans[number]++;
        }
        int ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(ans[i]>1)
            {
                return i;
            }
        }
        return -1;
    }
};