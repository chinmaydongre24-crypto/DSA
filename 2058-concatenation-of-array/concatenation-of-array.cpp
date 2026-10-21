class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        vector <int> ans;
        int ind=0;
        for(int i=0;i<nums.size();i++,ind++)
        {
            int element=nums[i];
            ans.push_back(element);
        }
        for(int i=0;i<nums.size();i++,ind++)
        {
            int element=nums[i];
            ans.push_back(element);
        }
        return ans;    
    }
};