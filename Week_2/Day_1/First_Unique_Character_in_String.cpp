class Solution
{
public:
    int firstUniqChar(string s)
    {
        int first = -1;
        unordered_map<char, int> mp;
        for (int i = 0; s[i]; i++)
        {
            mp[s[i]]++;
        }
        for (int i = 0; s[i]; i++)
        {
            if (mp[s[i]] == 1)
            {
                first = i;
                break;
            }
        }
        return first;
    }
};