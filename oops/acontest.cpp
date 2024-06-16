#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        // Find the position of 1 after performing swaps
        int pos_of_one = 1;
        for (int i = 2; i <= n; ++i) {
            int divisor = i;
            for (int j = 2; j <= sqrt(i); ++j) {
                if (i % j == 0) {
                    divisor = j;
                    break;
                }
            }
            pos_of_one = pos_of_one + i - divisor;
        }

        std::cout << pos_of_one << std::endl;
    }

    return 0;
}
