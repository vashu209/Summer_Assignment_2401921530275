class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> ans;
        int pos = 0;
        while (pos != nums.size() && nums[pos] < 0)
            pos++;
        int neg = pos - 1;
        while (neg >= 0 && pos < nums.size())
        {
            if (abs(nums[neg]) <= nums[pos])
            {
                ans.push_back(nums[neg] * nums[neg]);
                neg--;
            }
            else
            {
                ans.push_back(nums[pos] * nums[pos]);
                pos++;
            }
        }
        while (neg >= 0)
        {
            ans.push_back(nums[neg] * nums[neg]);
            neg--;
        }
        while (pos < nums.size())
        {
            ans.push_back(nums[pos] * nums[pos]);
            pos++;
        }
        return ans;
    }
};