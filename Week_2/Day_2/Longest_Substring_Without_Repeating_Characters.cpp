class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mp;
        int maxlen = 0;
        int left = 0, right = 0;
        while (s[right])
        {
            if (mp.find(s[right]) != mp.end())
            {
                if (mp[s[right]] >= left)
                    left = mp[s[right]] + 1;
            }
            maxlen = max(maxlen, right - left + 1);
            mp[s[right]] = right;
            right++;
        }
        return maxlen;
    }
};