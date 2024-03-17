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
    for(int i=0;i<desired_size.size();i++)
    {
        for(int j = count;j<size.size();j++)
        {
            if(size[j]-k>=desired_size[i] && size[j]+k<=desired_size[i])
            {
                count++;
                break;
            }
        }
    }
    cout<<count;
      return 0;
}