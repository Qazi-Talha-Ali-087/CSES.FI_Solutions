#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,maxi,mini;
        cin>>a;
        cin>>b;
        // solve(a,b);
        maxi=max(a,b);
        mini=min(a,b);
        if(maxi>2*mini)
        {
            cout<<"NO"<<endl;
        }
        else if(maxi==2*mini)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if((a+b)%3==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}