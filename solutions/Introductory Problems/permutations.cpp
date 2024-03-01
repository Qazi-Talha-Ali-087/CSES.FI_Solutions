#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll x;
    bool iseven=0;
    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    // if(n%2==0)
    // {
    //     x=n-1;
    //     iseven=true;
    // }
    // else
    // {
    //     x=n;
    // }
        for(ll i=2;i<=n ;i+=2)
        {
            cout<<i<<' ';
        }
        for(ll i=1;i<=n;i+=2)
        {
            cout<<i<<' ';
        }
    
        
 
    return 0;
}