int maxLen(int A[], int n)
{
    vector<int> presum;
    int sum = 0;
    int mx = 0;
    map<int, int> mp;
    for (int j = 0; j < n; j++)
    {
        sum = sum + A[j];
        if (sum == 0)
        {
            mx = j + 1;
        }
        if (mp.find(sum) != mp.end())
        {
            mx = max(mx, j - mp[sum]);
        }
        else
        {
            mp[sum] = j;
        }
    }
    return mx;
}