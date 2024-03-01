#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    cin >> x;
    int ans1 = -1, ans2 = -1;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<int, int> ans;
    for(int i=0;i<n;i++)
    {
        ans[arr[i]]=i;
    }
    for (int i = 0; i < n; i++) {
        int complement = x - arr[i];
        if (ans.find(complement) != ans.end() && ans[complement] != i) {
            ans1 = i;
            ans2 = ans[complement];
            break;  // Exit the loop once pair is found
        }
        ans[arr[i]] = i;
    }
    if (ans1 != -1) {
        ans1++;
        ans2++;
        cout << ans1 << ' ' << ans2;
    } else {
        cout << "IMPOSSIBLE";
    }
    return 0;
}
