class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        vector <int> ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++)
        {
            int next=ans[i-1]+nums[i];
            ans.push_back(next);
        }
        return ans;
    }
};