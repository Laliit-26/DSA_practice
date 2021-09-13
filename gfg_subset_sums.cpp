static void solve(vector<int> &arr, int sum, vector<int> &ans, int n)
{
    if (arr.size() == n)
    {
        ans.push_back(sum);
        return;
    }

    int op1 = sum;
    int op2 = sum + arr[n];
    // arr.erase(arr.begin());
    n++;

    solve(arr, op1, ans, n);
    solve(arr, op2, ans, n);
}

public:
vector<int> subsetSums(vector<int> arr, int N)
{
    // vector<int> ans;
    // for (int i = 0; i < (1 << N); i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < N; j++)
    //     {
    //         if ((1 << j) & i)
    //         {
    //             sum += arr[j];
    //         }
    //     }
    //     ans.push_back(sum);
    // }
    // return ans;

    vector<int> ans;
    int op = 0;
    int n = 0;
    solve(arr, op, ans, n);
    return ans;
}