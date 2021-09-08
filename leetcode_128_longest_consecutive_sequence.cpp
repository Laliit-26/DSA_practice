class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        if (nums.size() == 0)
            return 0;
        int mx = 0;
        int count = 1;
        sort(nums.begin(), nums.end());
        mp[nums[0]]++;
        for (int i = 1; i < nums.size(); i++)
        {
            if (mp[nums[i]] > 0)
                continue;
            mp[nums[i]]++;
            if (nums[i] == nums[i - 1] + 1)
            {
                count++;
            }
            else
            {
                mx = max(count, mx);
                count = 1;
            }
        }
        return max(count, mx);
    }
};