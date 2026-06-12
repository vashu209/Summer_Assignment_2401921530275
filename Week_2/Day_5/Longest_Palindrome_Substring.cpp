class Solution
{
private:
    void helper(string &s, int left, int right, int &start, int &maxlen)
    {
        while (left >= 0 && right < s.size() && s[left] == s[right])
        {
            if (right - left + 1 > maxlen)
            {
                start = left;
                maxlen = right - left + 1;
            }
            left--;
            right++;
        }
    }

public:
    string longestPalindrome(string s)
    {
        int start = 0;
        int maxlen = 1;
        for (int i = 0; i < s.size(); i++)
        {
            helper(s, i, i, start, maxlen);
            helper(s, i, i + 1, start, maxlen);
        }
        return s.substr(start, maxlen);
    }
};