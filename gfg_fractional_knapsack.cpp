double fractionalKnapsack(int W, Item arr[], int n)
{
    sort(arr, arr + n, comp);

    double max_val = 0.0;
    int curr_w = 0;
    for (int i = 0; i < n; i++)
    {
        if (curr_w + arr[i].weight <= W)
        {
            max_val += arr[i].value;
            curr_w += arr[i].weight;
        }
        else
        {
            int remaining = W - curr_w;
            max_val += (arr[i].value / (double)arr[i].weight) * (double)remaining;
            break;
        }
    }
    return max_val;
}