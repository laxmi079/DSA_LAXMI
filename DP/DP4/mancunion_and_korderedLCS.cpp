#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MAXN = 2005;
ll dp[MAXN][MAXN][6];

ll korderedLCS(vector<int>& a, vector<int>& b, int n, int m, int i, int j, int k) {
    if (i == n || j == m) return 0;
    if (dp[i][j][k] != -1) return dp[i][j][k];

    ll res = 0;
    if (a[i] == b[j]) {
        res = 1 + korderedLCS(a, b, n, m, i + 1, j + 1, k);
    } else {
        res = max(korderedLCS(a, b, n, m, i + 1, j, k), korderedLCS(a, b, n, m, i, j + 1, k));
        if (k > 0) {
            res = max(res, 1 + korderedLCS(a, b, n, m, i + 1, j + 1, k - 1));
        }
    }
    dp[i][j][k] = res;
    return res;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<int> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << korderedLCS(a, b, n, m, 0, 0, k) << endl;

    return 0;
}
