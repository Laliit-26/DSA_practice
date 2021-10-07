class Solution {
public:
    int majorityElement(vector<int>& nums) {
     //    map<int,int>mp;
     //    for(int i=0;i<nums.size();i++)
     //    {
     //        mp[nums[i]]++;
     //    }
     //    for(auto i:mp)
     //    {
     //       if(i.second>nums.size()/2)
     //           return i.first;
     //    }
     // return 0;
        int count=0;
        int num=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                num=nums[i];
            }
            if(num==nums[i])
                count++;
            else{
                count--;
            }
        }
        return num;
    }
};