class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0;
        string ans = "";
        while (j < t.length())
        {
            if (s[i] == t[j])
            {
                ans += s[i];
                i++;
            }
            j++;
        }
        return (ans == s) ? true : false;
    }
};