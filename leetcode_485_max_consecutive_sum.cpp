class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;

        int r = 0;
        int sz = 0;
        int count = 0;
        while (r != nums.size())
        {
            if (nums[r] == 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            r++;
            sz = max(sz, count);
        }
        return sz;
    }
};