class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        //         map<int,int>mp;
        //         vector<vector<int>>ans;
        //            set<vector<int>>s;

        //         for(int i=0;i<nums.size();i++)
        //         {
        //             mp[nums[i]]++;
        //         }
        //        for(int j=0;j<nums.size();j++)
        //        {    mp[nums[j]]--;
        //            for(int k=j+1;k<nums.size();k++)
        //            { mp[nums[k]]--;

        //                int p=-(nums[j]+nums[k]);
        //                if(mp[p]!=0)
        //                {
        //                    vector<int>m;
        //                    m.push_back(nums[j]);
        //                        m.push_back(nums[k]);
        //                        m.push_back(p);
        //                         sort(m.begin(),m.end());
        //                 s.insert(m);
        //                }
        //                mp[nums[k]]++;
        //            }
        //         mp[nums[j]]++;
        //        }
        // //         for(int h=0;h<s.size();h++)
        // //         {
        // //             cout<<s[h];

        // //         }
        //         for(auto i:s)
        //         {
        //          ans.push_back(i);
        //         }

        //         return ans;

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        if (nums.size() < 3)
            return ans;

        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (i == 0 || (i > 0 && (nums[i] != nums[i - 1])))
            { // int a=nums[i];
                int l = i + 1;
                int h = nums.size() - 1;
                int sum = 0 - nums[i];
                while (h > l)
                {
                    if (nums[l] + nums[h] == sum)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[h]);
                        ans.push_back(temp);

                        while ((h > l) && (nums[l] == nums[l + 1]))
                            l++;
                        while ((h > l) && (nums[h] == nums[h - 1]))
                            h--;
                        l++;
                        h--;
                    }

                    else if (nums[l] + nums[h] < sum)
                        l++;
                    else
                        h--;
                }
            }
        }

        return ans;
    }
};