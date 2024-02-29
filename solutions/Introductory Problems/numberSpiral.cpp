#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int x,y;
        cin>>y;
        cin>>x;
    //    long long int c;
    // cout<<"the value of x,y are ("<<x<<","<<y<<")"<<endl;
       if(x>=y)
       {
            long long int square=x*x;
            if(x%2==0)
            {
                //Implies we are at (x,1) and we want to reach (x,y)
                  long long int ans =square-(2*x)+(y-1)+2;
               cout<<ans<<endl;
            }
            else{
                //Implies we are at(1,x) and we want to reach (x,y)
                long long int ans =square-(y-1);
                cout<<ans<<endl;
            }
       }
       else
       {
        // cout<<"checking if entering in the else part"<<endl;
        long long int square=y*y;
            if(y%2==0)
            {
                long long int ans=square-(x-1);
                cout<<ans<<endl;
            }
            else
            {
                long long int ans=square-(y-x+y-1);
                cout<<ans<<endl;
            }
       }
    }
    return 0;
}