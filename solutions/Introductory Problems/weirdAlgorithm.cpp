#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    while(n!=1)
    {
        
        if(n%2==0)
        {
            cout<<n<<' ';
            n=n>>1;
            
        }
        else
        {
              cout<<n<<' ';
            n=n*3+1;
          
        }
    }
    cout<<n;
    return 0;
}