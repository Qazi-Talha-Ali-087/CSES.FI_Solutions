#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int > v(n);
    // unordered_map<int,int> map;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        // map[v[i]]++;
    }
    sort(v.begin(),v.end());
    int number ;
    long long int sum=0;
    
    number = n/2;

    for(int i=0;i<n;i++)
    {
        sum +=abs(v[number]-v[i]);
    }
    cout<<sum;

      return 0;
}