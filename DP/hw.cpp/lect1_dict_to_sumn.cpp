#include <bits/stdc++.h>
using namespace std;

vector<int> dp;

int f(int n) {
    if (n == 0) return 1; // There's one way to get sum 0: using no dice.
    if (n < 0) return 0;  // No way to get a negative sum.
    if (dp[n] != -1) return dp[n];

    int sum = 0;
    for (int j = 1; j <= 6; ++j) {

        sum += f(n - j);
    }
    return dp[n] = sum;
}

int main() {
    int n = 4;
    dp.resize(n + 1, -1);
    cout << f(n) << endl;
    return 0;
}
