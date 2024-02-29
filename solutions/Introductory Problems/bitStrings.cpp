#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=1;
    for(int i=1;i<=n;i++)
    {
        x=(x*2)%1000000007;
    }
    cout<<x%1000000007;
    return 0;
}