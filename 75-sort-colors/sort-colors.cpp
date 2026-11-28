class Solution {
public:
    void sort(vector<int>& nums,int s,int e)
    {
        if(s>=e)
        {
            return ;
        }
        int pivot=nums[s+(e-s)/2];
        int i=s;
        int j=s;
        int k=e;
        while(j<=k)
        {
            if(nums[j]<pivot)
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[j]>pivot)
            {
                swap(nums[j],nums[k]);
                k--;
            }
            else
            {
                j++;
            }
            sort(nums,s,i-1);
            sort(nums,k+1,e);
        }
    }
    void sortColors(vector<int>& nums)
    {
        sort(nums,0,nums.size()-1);
    }
};