vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<int>s;
        vector<long long>ans(n,-1);
        
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && arr[i]>arr[s.top()])
            {
                ans[s.top()]=arr[i];
                s.pop();
            }
            s.push(i);
        }
        
        // for(int i=n-1;i>=0;i--)
        // {
        //     if(s.empty()==true)
        //     {
        //         ans.push_back(-1);
        //         s.push(arr[i]);
        //         continue;
        //     }
        //     if(arr[i]<s.top())
        //     {
        //         ans.push_back(s.top());
        //         s.push(arr[i]);
        //     }
        //     if(arr[i]>s.top())
        //     {
        //         while(!s.empty() && s.top()<arr[i])
        //         {
        //             s.pop();
        //         }
        //             if(s.empty()==true)
        //           {
        //             ans.push_back(-1);
        //             }
        //              else
        //             {
        //             ans.push_back(s.top());
        //             }
        //         s.push(arr[i]);
        //     }
            
        // }
        // reverse(ans.begin(),ans.end());
        return ans;
    }