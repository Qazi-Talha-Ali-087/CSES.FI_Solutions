#include<bits/stdc++.h>
using namespace std;
int main()
{
    //1 2 3 4
    //1 2 3 4 5 6 7 8
    // 1 2 7 8
    // 3 4 5 6
    // 1 2 3 4 5 6 7
    // 1 7 2 4
    // 3 5 6
    int n;
    cin>>n;
    if(n%4==0 || n%4==3)
    {
        if(n%4==0)
        {
            cout<<"YES"<<endl;
        cout<<n/2<<endl;
        for(int i=1;i<n/2;i+=2)
        {
            // int x=n;
            cout<<i<<' '<<n-i+1<<' ';
        }
        cout<<endl<<n/2<<endl;
        for(int i=2;i<=n/2;i+=2)
        {
            cout<<i<<' '<<n-i+1<<' ';
        }
        }
        else
        {
            cout<<"YES"<<endl;
            int x;
            x=(n-3)/2+1;
            cout<<x<<endl;
            cout<<3<<' ';
            for(int i=4;i<n/2+3;i+=2)
            {
                cout<<i<<' '<<n-i+4<<' ';
                // cout<<"hello ";
            }
            cout<<endl;
            x=(n-3)/2+2;
            cout<<x<<endl;
            cout<<1<<' '<<2<<' ';
            for(int i=5;i<=n/2+3;i+=2)
            {
                cout<<i<<' '<<n-i+4<<' ';
            }
            
        }
    }
    else 
    {
        cout<<"NO";
    }
    
    return 0;
}