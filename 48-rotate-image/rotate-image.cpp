class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        int total=matrix.size()*matrix.size();
        for(int row=0;row<matrix.size();row++)
        {
            for(int col=row+1;col<matrix.size();col++)
            {
                swap(matrix[row][col],matrix[col][row]);
            }
        }
        for(int row=0;row<matrix.size();row++)
        {
            int start=0,end=matrix.size()-1;
            while(start<=end)
            {
                swap(matrix[row][start++],matrix[row][end--]);
            }
        }
    }
};