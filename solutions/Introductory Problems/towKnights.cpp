#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(long long int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<0<<endl;
        }
        else if(i==2)
        {
            cout<<6<<endl;
        }
        else
        {
            long long int x=(i*i)*(i*i-1)/2-4*(i-1)*(i-2);
            cout<<x<<endl;
        }
    }
    return 0;
}