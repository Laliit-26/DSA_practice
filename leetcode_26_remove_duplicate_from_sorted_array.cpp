class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        // set<int>s;
        // for(int i=0;i<nums.size();i++)
        // {
        //     s.insert(nums[i]);
        // }
        // int i=0;
        // for(auto p:s)
        // {
        //     nums[i]=p;
        //     i++;
        // }
        // return s.size();

        if (nums.size() == 0)
            return 0;

        vector<int> v;
        int l = 0;
        int h = 0;
        while (h != nums.size())
        {
            if (nums[l] == nums[h])
                h++;
            else
            {
                nums[l + 1] = nums[h];
                l++;
                h++;
            }
        }

        return l + 1;
    }
};