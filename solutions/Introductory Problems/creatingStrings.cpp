#include<bits/stdc++.h>
using namespace std;
void permutations(vector<string>&ans,int start,int end,string s)
{
    if (start == end) {
        ans.push_back(s);
        return;
    }
    unordered_set<char> used; // To track characters that have been used at this position
    for (int i = start; i <= end; i++) {
        if (used.find(s[i]) != used.end()) {
            continue; // Skip if the character has already been used at this position
        }
        used.insert(s[i]);
        swap(s[start], s[i]);
        permutations(ans, start + 1, end, s);
        swap(s[start], s[i]); // Backtrack
    }
}
int main()
{
    string s;
    cin>>s;
    vector<string> ans;
    permutations(ans,0,s.size()-1,s);
    cout<<ans.size()<<endl;
    sort(ans.begin(),ans.end());
    for(auto i:ans)
    {
        cout<<i<<endl;
    }
    return 0;
}