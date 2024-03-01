#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    cin>>x;
    int count=0;
    int a;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    // for(auto i : arr)
    // {
    //     cout<<i<<' ';
    // }
    int start=0,end=n-1;
    // cout<<arr[start]<<' '<<arr[end];
    while(start<=end)
    {
        // cout<<"start is -> "<<start<<endl;
        // cout<<"end is -> "<<end<<endl;
        // cout<<"the value of count is "<<count<<endl;
        if(start<end)
        {
            if(arr[start]+arr[end]<=x)
            {
                // cout<<"the pair is "<<arr[start]<<','<<arr[end]<<endl;
                count++;
                start++;
                end--;
            }
            else
            {
                // cout<<"the end one is "<<arr[end]<<endl;
                count++;
                end--;
            }
        }
        else if(start==end)
        {
            // cout<<"the start and end coincide "<<arr[start]<<arr[end]<<endl;
            count++;
            break;
        }
        else
        {
            break;
        }
    }
    cout<<count;
    return 0;
}