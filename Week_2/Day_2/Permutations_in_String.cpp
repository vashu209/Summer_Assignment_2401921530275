class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        vector<int> freq(26, 0);
        for (char x : s1)
        {
            freq[x - 'a']++;
        }
        int l = 0, r = 0;
        while (r < s2.length())
        {
            freq[s2[r] - 'a']--;
            if (r - l + 1 > s1.length())
            {
                freq[s2[l] - 'a']++;
                l++;
            }
            if (r - l + 1 == s1.size())
            {
                bool ok = true;
                for (int x : freq)
                {
                    if (x != 0)
                    {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                    return true;
            }
            r++;
        }
        return false;
    }
};