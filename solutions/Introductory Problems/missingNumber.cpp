#include<iostream>
using namespace std;
int main()
{
    int n,x,ans=0;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        // cout<<"now xoring with "<<x<<' '<<endl;
        ans^=x;
    }
    //Note here you have to start with n+1 to xor in extension as n could have been given in the input 
    for(int i=n+1;i<n-n%4+3+1;i++)
    {
        // cout<<"now xoring with "<<i<<' '<<endl;
        ans^=i;
        // cout<<"is it entering"<<endl;
    }
    // cout<<"hello";
    cout<<ans;
    return 0;
}