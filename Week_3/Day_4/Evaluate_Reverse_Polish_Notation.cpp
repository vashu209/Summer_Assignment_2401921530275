class Solution
{
private:
    bool isnumber(const string &s)
    {
        if (s.empty())
            return false;
        int start = 0;
        if (s[0] == '-')
        {
            if (s.size() == 1)
                return false;
            start = 1;
        }
        for (int i = start; i < s.size(); i++)
        {
            if (!isdigit(s[i]))
                return false;
        }
        return true;
    }

public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> s;
        int a, b;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (isnumber(tokens[i]))
            {
                s.push(stoi(tokens[i]));
            }
            else
            {
                b = s.top();
                s.pop();
                a = s.top();
                s.pop();
                if (tokens[i] == "+")
                {
                    s.push(a + b);
                }
                else if (tokens[i] == "-")
                {
                    s.push(a - b);
                }
                else if (tokens[i] == "*")
                {
                    s.push(a * b);
                }
                else
                {
                    s.push(a / b);
                }
            }
        }
        return s.top();
    }
};