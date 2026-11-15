class Solution {
public:
    int maxRotateFunction(vector<int>& nums)
    {
        long long int maxi=INT_MIN;
        long long int n=nums.size();
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        long long int f0=0;
        for(int i=0;i<n;i++)
        {
            f0+=i*nums[i];
        }
        maxi=max(f0,maxi);
        for(int i=0;i<n-1;i++)
        {
            long long int next=f0+sum-n*nums[n-(i+1)];
            maxi=max(maxi,next);
            f0=next;
        }
        return maxi;
    }
};