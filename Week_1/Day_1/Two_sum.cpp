class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int key;
        std::vector<int> result;
        int i = 0;
        int n;
        n = nums.size();
        while (i < n)
        {
            key = nums[i];
            for (int j = i + 1; j < n; j++)
            {
                if (target - key == nums[j])
                {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
            i++;
        }
        return result;
    }
};