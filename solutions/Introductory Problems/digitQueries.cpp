#include <bits/stdc++.h>
using namespace std;
void solve(long long q)
{
    long long x=0;
    long long i=1;
    if(q<=9)
    {
        cout<<q<<endl;
        return;
    }
    while(x<=q)
    {
        long long ten=pow(10,i-1);
        x=x+i*ten*9;
        i++;
    }
    i--;
    long long ten=pow(10,i-1);
    x-=i*ten*9;
     if(x==q)
    {
        cout<<9<<endl;
        return;
    }
   long long int count=1*pow(10,i-1);
   count--;
//    cout<<"the value of x is "<<x<<endl;
//    cout<<"the value of i is "<<i<<endl;
      long long int n=(q-x-1)/i;
    // cout<<"the numbers to be added are "<<n<<endl;
    // cout<<"value of count is "<<count<<endl;
    // cout<<"the number is "<<count+n+1<<endl;
    long long int last=x+n*i+1;
    long long int number =count+n+1;
    string ans=to_string(number);
    cout<<ans[q-last]<<endl;
 
 
    return;
}
 
 
int main()
{
    int k;
    cin >> k;
    long long int q;
    while(k--)
    {
        cin>>q;
        solve(q);
    }
    return 0;
}