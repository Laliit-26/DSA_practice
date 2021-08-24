#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 35, 13,35, 10, 34, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int largest, sec_largest;
    largest =INT_MIN;
    sec_largest = INT_MIN;

    // first..................................................
    // sort(arr, arr + n);
    // for (int j = 0;j<n;j++)
    // {
    //     cout << arr[j]<<" ";
    // }
    // int max = 0;
    // for (int k = n - 2; k >= 0;k--)
    // {
    //     if(arr[k]!=arr[n-1])
    //     {
    //         max = arr[k];
    //         break;
    //     }
    // }
    // cout << max;

// second............................................................
    // for (int i = 0;i<n;i++)
    // {
    //     largest = max(largest, arr[i]);
    // }
    // cout << largest;
    // for (int j = 0; j < n;j++)
    // {
    //     if(arr[j]!=largest)
    //     {
    //         sec_largest = max(sec_largest, arr[j]);
    //     }
    // }
    // cout << sec_largest;

    // third.............................................................
    for (int i = 0; i < n;i++)
    {
      if(arr[i]>largest)
      {
          sec_largest = largest;
          largest = arr[i];}
      else if(arr[i]>sec_largest && arr[i]!=largest)
      {
          sec_largest = arr[i];
      }
    }
    cout << sec_largest;
}