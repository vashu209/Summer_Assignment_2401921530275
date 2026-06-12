class Solution
{
public:
    int compress(vector<char> &chars)
    {
        string s = "";
        if (chars.empty())
            return 0;
        char candidate = chars[0];
        int count = 1;
        for (int i = 1; i < chars.size(); i++)
        {
            if (chars[i] == candidate)
            {
                count++;
            }
            else
            {
                s += candidate;
                if (count > 1)
                {
                    int temp = count;
                    s += to_string(temp);
                }
                candidate = chars[i];
                count = 1;
            }
        }
        s += candidate;
        if (count > 1)
        {
            int temp = count;
            s += to_string(temp);
        }
        for (int i = 0; i < s.size(); i++)
        {
            chars[i] = s[i];
        }
        return s.size();
    }
};