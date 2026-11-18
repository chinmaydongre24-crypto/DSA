class Solution {
public:
    bool checkPerfectNumber(int num)
    {
        vector<int> arr;
        int sum=0;
        for(int i=1;i<=num/2;i++)
        {
            if(num%i==0)
            {
                arr.push_back(i);
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        if(sum==num)
        {
            return true;
        }
        return false;
    }
};