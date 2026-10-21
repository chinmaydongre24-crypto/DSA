class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        vector <int> ans(2*nums.size(),1);
        int start=0;
        int end=nums.size();
        for(int i=0;i<nums.size();i++,start++,end++)
        {
            ans[start]=nums[i];
            ans[end]=nums[i];
        }
        return ans;    
    }
};