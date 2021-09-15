class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        map<int, int> mp;
        stack<int> s;
        for (int k = 0; k < nums2.size(); k++)
        {
            mp[nums2[k]] = -1;
        }

        for (int i = 0; i < nums2.size(); i++)
        {
            while (!s.empty() && nums2[i] > nums2[s.top()])
            {
                mp[nums2[s.top()]] = nums2[i];
                s.pop();
            }
            s.push(i);
        }
        for (int j = 0; j < nums1.size(); j++)
        {
            int p = nums1[j];
            ans.push_back(mp[p]);
        }
        return ans;
    }
};