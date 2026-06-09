class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> freqS(26, 0), freqP(26, 0), ans;
        for (char x : p)
        {
            freqP[x - 'a']++;
        }
        int length = p.length();
        for (int i = 0; i < s.length(); i++)
        {
            freqS[s[i] - 'a']++;
            if (i >= length)
            {
                freqS[s[i - length] - 'a']--;
            }
            if (freqS == freqP)
            {
                ans.push_back(i - length + 1);
            }
        }
        return ans;
    }
};