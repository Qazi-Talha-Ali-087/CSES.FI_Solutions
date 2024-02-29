#include<iostream>
using namespace std;
int main()
{
    string name;
    cin>>name;
    long long int maxi=0,current=0;
   long long int n=name.length();
    for(int i=0;i<n-1;i++)
    {
        if(name[i]==name[i+1])
        {
            current++;
            // cout<<"value of current "<<current<<endl;
            // cout<<"value of maxi is "<<maxi<<endl;
            
        }
        else
        {
            maxi=max(maxi,current);
            current=0;
        }
        // if(maxi>=n-i)
        // {
        //     break;
        // }
    }
    maxi=max(maxi,current);
    cout<<maxi+1;
    return 0;
}