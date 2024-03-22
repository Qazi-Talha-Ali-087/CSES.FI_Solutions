#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<int,int> ans;
    int m;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        ans[m]=i;
    }
    int count=1;
    int start ;
    start = ans[1];
    for(int i=2;i<=n;i++)
    {
        if(ans[i]<start)
        {
            start = ans[i];
            count++;
        }
    }   
    cout<<count;
      return 0;
}