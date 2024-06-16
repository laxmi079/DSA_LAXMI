#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, n;
        cin >> x >> n;

        // Calculate the maximum balance
        int maxBalance = 0;
        
        // If n is greater than or equal to x, set maxBalance to x
        if (n >= x) {
            maxBalance = x;
        } else {
            // Otherwise, calculate the GCD of x and n, and set maxBalance to that GCD
            maxBalance = gcd(x, n);
        }

        cout << maxBalance << endl;
    }

    return 0;
}
