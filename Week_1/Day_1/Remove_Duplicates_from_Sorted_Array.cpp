class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = nums[0];
        std::vector<int> removed;
        removed.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                continue;
            }
            else
            {
                removed.push_back(nums[i]);
            }
        }
        k = removed.size();
        for (int i = 0; i < k; i++)
        {
            nums[i] = removed[i];
        }
        return k;
    }
};