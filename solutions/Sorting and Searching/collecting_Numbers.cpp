#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;

    unordered_map<long long int, long long int> ans;
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        ans[m] = i;
    }

    long long int count = 1;
    long long int start = ans[1]; // Initialize start with the position of the first number

    for (int i = 2; i <= n; i++)
    {
        if (ans[i] < start)
        {
            start = ans[i]; // Update start only when a smaller position is found
            count++; // Increment count for each round
        }
        else
        {
            start=ans[i];
        }
    }

    cout << count << endl;
    return 0;
}
