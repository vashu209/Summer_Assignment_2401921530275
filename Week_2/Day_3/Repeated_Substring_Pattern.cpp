class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        string doubled = s + s;
        for (int i = 1; i + s.size() < doubled.size(); i++)
        {
            if (doubled.substr(i, s.size()) == s)
                return true;
        }
        return false;
    }
};