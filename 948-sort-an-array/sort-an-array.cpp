class Solution {
public:
    void quickSort(vector<int>& nums, int s, int e)
    {
        if(s >= e)
        {
            return;
        }

        int pivot = nums[s + (e - s) / 2];

        int i = s;
        int j = s;
        int k = e;

        while(j <= k)
        {
            if(nums[j] < pivot)
            {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else if(nums[j] > pivot)
            {
                swap(nums[j], nums[k]);
                k--;
            }
            else
            {
                j++;
            }
        }

        quickSort(nums, s, i - 1);
        quickSort(nums, k + 1, e);
    }

    vector<int> sortArray(vector<int>& nums)
    {
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
};