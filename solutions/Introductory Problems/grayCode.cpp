#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> code;
    code.push_back("0");
    code.push_back("1");
    // int z=pow(2,n);
    n=n-1;
    while(n--)
    {
    int x=code.size();
    // cout<<x;
    x=x-1;
    for(int i=x;i>=0;i--)
    {
        string s = code[i];
        code.push_back(s);
    }
    int y=code.size();
    for(int i=0;i<y/2;i++)
    {
        code[i]="0"+code[i];
    }
    for(int i=y/2;i<y;i++)
    {
        code[i]="1"+code[i];
    }
    }
    for(auto i: code)
    {
        cout<<i<<endl;
    }
 
    
    return 0;
}