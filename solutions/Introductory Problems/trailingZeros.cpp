#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int five=0,two=0;
    long long int t=n;
    while(t!=0)
    {
        five+=t/5;
        t=t/5;
        // cout<<"adding vlaue to five is "<<five;
        // cout<<"value of t is "<<t;
    }
    // cout<<five;
    t=n;
    while(t!=0)
    {
        two+=t/2;
        t=t/2;
    }
    cout<<min(five,two);
    return 0;
}