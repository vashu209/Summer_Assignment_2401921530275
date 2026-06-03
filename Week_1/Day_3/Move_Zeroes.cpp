class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int j{0};
        int count{0};
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                count++;
                continue;
            }
            else
            {
                nums[j] = nums[i];
                j++;
            }
        }
        j = nums.size() - count;
        while (j < nums.size())
        {
            nums[j++] = 0;
        }
    }
};