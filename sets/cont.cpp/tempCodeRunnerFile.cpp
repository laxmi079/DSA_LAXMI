#include <iostream>
#include <vector>
using namespace std;

// Function to simulate the game for a given n
int simulate_game(int n, vector<int>& a) {
    int remaining_players = n;
    while (true) {
        // Check if there are enough players for all kicks
        bool kicked_out = false;
        for (int ai : a) {
            if (ai > remaining_players) {
                kicked_out = true;
                break;
            }
        }
        if (kicked_out) break;

        // Kick out players
        for (int ai : a) {
            if (ai <= remaining_players) {
                remaining_players--;
            }
        }

        // If no players were kicked out in this round, end the game
        if (remaining_players == n) break;
    }
    return remaining_players;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int k, q;
        cin >> k >> q; // Length of the sequence and number of queries
        vector<int> a(k);
        for (int i = 0; i < k; ++i) {
            cin >> a[i]; // Sequence a
        }
        vector<int> n_values(q);
        for (int i = 0; i < q; ++i) {
            cin >> n_values[i]; // Values of ni
        }

        // Iterate through each query value ni and simulate the game
        for (int ni : n_values) {
            cout << simulate_game(ni, a) << " ";
        }
        cout << endl; // Move to the next line for the next test case
    }
    return 0;
}


