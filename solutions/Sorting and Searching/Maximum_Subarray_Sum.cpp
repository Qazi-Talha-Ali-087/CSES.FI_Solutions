#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n;
    cin>>n;
    vector<int> v(n);
  long long  int number;
 long long  int maxi = INT_MIN,prefix =0 ;
    for(int i =0;i<n;i++)
    {
        cin>>number;
        prefix+=number;
        maxi = max(maxi,prefix);
        if(prefix<0)
        {
            prefix = 0;
        }
    }
    cout<<maxi;
      return 0;
}