#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n;
    cin>>m;
    cin>>k;
    vector <int> desired_size(n);
    for(int i=0;i<n;i++)
    {
        cin>>desired_size[i];
    }
    vector <int> size(m);
    for(int i=0;i<m;i++)
    {
        cin>>size[i];
    }
    sort(size.begin(),size.end());
    sort(desired_size.begin(),desired_size.end());
    int count = 0;
    for(int i=0;i<size.size();i++)
    {
        for(int j = count;j<desired_size.size();j++)
        {
            if(size[i]<=desired_size[j] +k && size[i] >= desired_size[j]-k)
            {
                count++;
                break;
            }
        }
    }
    cout<<count;
      return 0;
}