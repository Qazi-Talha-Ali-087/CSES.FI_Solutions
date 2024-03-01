#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int , int > s;
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        s[x]++ ;
    }
    int ans = 0 ;
    for( auto i : s ) ans++ ;
    cout << ans << endl ;
 
    return 0;
}