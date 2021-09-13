vector<int> subsetSums(vector<int> arr, int N)
{
    vector<int> ans;
    for (int i = 0; i < (1 << N); i++)
    {
        int sum = 0;
        for (int j = 0; j < N; j++)
        {
            if ((1 << j) & i)
            {
                sum += arr[j];
            }
        }
        ans.push_back(sum);
    }
    return ans;
}
}
;
