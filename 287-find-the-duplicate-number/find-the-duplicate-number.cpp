class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        vector <int> ans(nums.size(),0);
        int number=0;
        for(int i=0;i<nums.size();i++)
        {
            number=nums[i];
            ans[number]++;
        }
        int maxi=0,ind=0;
        for(int i=0;i<nums.size();i++)
        {
            if(ans[i]>maxi)
            {
                maxi=ans[i];
                ind=i;
            }
        }
        return ind;
    }
};