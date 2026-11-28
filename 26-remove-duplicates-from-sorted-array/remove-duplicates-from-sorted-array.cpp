class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        for(int i=0;i<nums.size();i++)
        {
            int count =0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
            if(count>1)
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};