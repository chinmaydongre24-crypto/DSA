class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        int index=0;
        int high=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]>nums[i])
            {
                index=i+1;             
            }
        }
        return index;
    }
};