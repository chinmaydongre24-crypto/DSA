class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(nums[i]*nums[i]);
        }
        for(int i=0;i<ans.size()-1;i++)
        {
            for(int j=0;j<ans.size()-i-1;j++)
            {
                if(ans[j]>ans[j+1])
                {
                    swap(ans[j],ans[j+1]);
                }
            }
        }
        return ans;
    }
};