class Solution
{
private:
    void generate(int n, vector<string> &ans, string &ds, int count1, int count2)
    {
        if (count1 == n && count2 == n)
        {
            ans.push_back(ds);
            return;
        }
        if (count1 < n)
        {
            ds.push_back('(');
            generate(n, ans, ds, count1 + 1, count2);
            ds.pop_back();
        }
        if (count2 < count1)
        {
            ds.push_back(')');
            generate(n, ans, ds, count1, count2 + 1);
            ds.pop_back();
        }
    }

public:
    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        string ds = "";
        generate(n, ans, ds, 0, 0);
        return ans;
    }
};