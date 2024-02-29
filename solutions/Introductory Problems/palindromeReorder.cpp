#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque <char> queue;
    bool front=true;
    string s;
    cin>>s;
    int count=0;
    int arr[26]={0};
    long long int size=s.size();
    for(int i=0;i<size;i++)
    {
        arr[s[i]-'A']++;
    }
    // for(int i=0;i<26;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    for(int i=0;i<26;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    if(count>1)
    {
        cout<<"NO SOLUTION";
        return 0;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]%2!=0)
        {
            while(arr[i]!=0)
            {
                if(front)
            {
                queue.push_front('A'+i);
                arr[i]--;
                front=false;
            }
            else{
                queue.push_back('A'+i);
                arr[i]--;
                front=true;
            }
            }
        }
    }
    for(int i=0;i<26;i++)
    {
        while(arr[i]!=0)
        {
            if(front)
            {
                queue.push_front('A'+i);
                arr[i]--;
                front=false;
            }
            else{
                queue.push_back('A'+i);
                arr[i]--;
                front=true;
            }
        }
    }
    while(!queue.empty())
    {
        cout<<queue.front();
        queue.pop_front();
    }
    return 0;
}
