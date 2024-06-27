#include <bits/stdc++.h>
using namespace std;

long long int minimum(vector<int>& v, int start, int end, long long int sum1, long long int sum2) {
    if (start == end) {
        return abs(sum1 - sum2);
    }
    return min(minimum(v, start + 1, end, sum1 + v[start], sum2),
               minimum(v, start + 1, end, sum1, sum2 + v[start]));
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << minimum(v, 0, n, 0, 0) << endl;
    return 0;
}
