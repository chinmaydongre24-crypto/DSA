class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int> ans;
        int row=matrix.size();
        int column=matrix[0].size();
        int count=0;
        int total=row*column;
        int startingrow=0;
        int startingcolumn=0;
        int endingrow=row-1;
        int endingcolumn=column-1;
        while(count<total)
        {
            for(int index = startingcolumn;index<=endingcolumn && count<total;index++)
            {
                ans.push_back(matrix[startingrow][index]);
                count++;
            }
            startingrow++;
            for(int index=startingrow;index<=endingrow && count<total;index++)
            {
                ans.push_back(matrix[index][endingcolumn]);
                count++;
            }
            endingcolumn--;
            for(int index=endingcolumn;index>=startingcolumn && count<total;index--)
            {
                ans.push_back(matrix[endingrow][index]);
                count++;
            }
            endingrow--;
            for(int index=endingrow;count<total && index>=startingrow;index--)
            {
                ans.push_back(matrix[index][startingcolumn]);
                count++;
            }
            startingcolumn++;
        }
        return ans;
    }
};