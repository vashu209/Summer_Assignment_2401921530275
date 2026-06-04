class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int sum = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            sum += mat[i][i];
        }
        int i = 0;
        int j = mat[0].size() - 1;
        while (j >= 0)
        {
            if (mat.size() % 2 != 0 && i == j)
            {
                i++;
                j--;
                continue;
            }
            sum += mat[i][j];
            i++;
            j--;
        }
        return sum;
    }
};