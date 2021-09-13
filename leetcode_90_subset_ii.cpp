class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        set<vector<int>> ans;
        vector<vector<int>> answer;
        for (int i = 0; i < (1 << nums.size()); i++)
        {
            vector<int> temp;
            for (int j = 0; j < nums.size(); j++)
            {
                if ((1 << j) & i)
                {
                    temp.push_back(nums[j]);
                }
            }
            sort(temp.begin(), temp.end());
            ans.insert(temp);
        }
        for (auto i : ans)
        {
            answer.push_back(i);
        }
        return answer;
    }
};