#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    vector <int> price(n);
    vector <int> max(m);
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>max[i];
    }
    sort(price.begin(),price.end());    
      return 0;
}