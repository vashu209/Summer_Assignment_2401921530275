class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans = "";
        int i = 0;
        int size = INT_MAX;
        while (i < strs.size())
        {
            if (strs[i].size() < size)
            {
                size = strs[i].size();
            }
            i++;
        }
        for (int j = 0; j < size; j++)
        {
            char ch = strs[0][j];
            for (int k = 1; k < strs.size(); k++)
            {
                if (strs[k][j] != ch)
                {
                    return ans;
                }
            }
            ans += strs[0][j];
        }
        return ans;
    }
};