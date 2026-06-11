class Solution
{
private:
    string helper(string &s, int &i)
    {
        string ans = "";
        while (i < s.size() && s[i] != ']')
        {
            if (isdigit(s[i]))
            {
                string numstr;
                while (i < s.size() && isdigit(s[i]))
                {
                    numstr += s[i++];
                }
                i++;
                int num = 0;
                if (!numstr.empty())
                    num = stoi(numstr);
                string sub = helper(s, i);
                i++;
                while (num > 0)
                {
                    ans += sub;
                    num--;
                }
            }
            else
            {
                ans += s[i];
                i++;
            }
        }
        return ans;
    }

public:
    string decodeString(string s)
    {
        int i = 0;
        return helper(s, i);
    }
};