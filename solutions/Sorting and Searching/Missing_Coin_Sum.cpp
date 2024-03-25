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
    long long int a=1;
    for(int i=0;i<n;i++)
    {
        if(a<v[i])
        {
            break;
        }
        else 
        a+= v[i];
    }
    cout<<a;
      return 0;
}