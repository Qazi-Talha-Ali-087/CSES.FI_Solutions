#include<iostream>
using namespace std;
int main()
{
   long long int n;
    cin>>n;
    long long int prev=0,count=0,current;
    for(int i=0;i<n;i++)
    {
        cin>>current;
 
        // cout<<"the value of current is "<<current<<endl;
        // cout<<"the value of previous is "<<prev<<endl;
        if(current<prev)
        {
            count+=prev-current;
            // cout<<"adding the value in count "<<prev-current<<endl;
            current=current+prev-current;
 
        }
        prev=current;
    }
    cout<<count;
    return 0;
}
