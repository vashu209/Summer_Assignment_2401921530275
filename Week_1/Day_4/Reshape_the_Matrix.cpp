class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        if (mat.size() * mat[0].size() != r * c)
            return mat;
        vector<int> temp(r * c);
        vector<vector<int>> ans(r, vector<int>(c));
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                temp[mat[0].size() * i + j] = mat[i][j];
            }
        }
        for (int i = 0; i < temp.size(); i++)
        {
            int row = i / c;
            int col = i % c;
            ans[row][col] = temp[i];
        }
        return ans;
    }
};