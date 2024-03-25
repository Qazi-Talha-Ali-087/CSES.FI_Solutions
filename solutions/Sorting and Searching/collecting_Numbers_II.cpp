#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    unorderd_map<int,int> ans;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        ans[x] = i;
    }
    while(m--)
    {
        int a ,b;
        cin>>a;
        cin>>b;
        if (ans.count(a) && ans.count(b)) {
        swap(ans[a], ans[b]);
    }
    }
      return 0;
}