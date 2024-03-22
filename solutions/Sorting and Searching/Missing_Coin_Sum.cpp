#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long int prefix=0,count = 0;
    for(int i=0;i<n;i++)
    {
        prefix+=v[i];
        count++;
        if(prefix!=count)
        {
            cout<<count<<endl;
            return 0;
        }
    }
      return 0;
}