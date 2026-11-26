class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int start=0;
        int end=0;
        int maxi=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==1)
            {
                end++;
            }
            if(nums[i]==0)
            {
                maxi=max(maxi,end-start);
                if(nums[i+1]==1)
                {
                    end=start=i+1;
                }
            }
        }
        if(nums[nums.size()-1]==1)
        {
            end++;
        }
        maxi=max(maxi,end-start);
        return maxi;
    }
};