class Solution
{
public:
    string reverseWords(string s)
    {
        int l = 0, j = 0;
        string ans = "";
        for (int i = 0; i <= s.length(); i++)
        {
            if (i == s.size() || s[i] == ' ')
            {
                j = i - 1;
                while (j >= l)
                {
                    ans += s[j];
                    j--;
                }
                if (i != s.size())
                    ans += ' ';
                l = i + 1;
            }
        }
        return ans;
    }
};