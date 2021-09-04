class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> v;
        int n = nums.size();
        //         for( int i=0;i<n;i++)
        //         {
        //             for(int j=i+1;j<n;j++)
        //             {
        //                 if(nums[i]+nums[j]==target)
        //                 {
        //                     v.push_back(i);
        //                     v.push_back(j);
        //                     break;
        //                 }
        //             }
        //         }

        //         return v;

        // sort(nums.begin(),nums.end());
        // int l=0;
        // int r=n-1;
        // while(r>l)
        // {
        //     if(nums[l]+nums[r]==target)
        //     {
        //          v.push_back(l);
        //             v.push_back(r);
        //             break;
        //     }
        //   else if(nums[l]+nums[r]>target)
        //   {  r--;}
        //    else
        //         l++;
        // }
        // return v;
        map<int, int> mp;
        for (int j = 0; j < n; j++)
        {
            int fn = target - nums[j];
            if (mp.find(fn) == mp.end())
            {
                mp[nums[j]] = j;
            }
            else
            {
                v.push_back(j);
                v.push_back(mp[fn]);
                break;
            }
        }
        return v;
    }
};