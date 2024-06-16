#include <iostream>
#include <string>
using namespace std;

string make_binary(int n) {
    string ans = "";
    while (n > 0) {
        if (n % 2 == 0) {
            ans = "0" + ans;
        } else {
            ans = "1" + ans;
        }
        n /= 2; 
    }
    return ans;
}

int flip_bits(int n) {
    const int temp=n;
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);
    return temp^n; 
}

int main() {
    int n;
    cin >> n;
    cout<<make_binary(n)<<endl;
    cout << make_binary(flip_bits(n)); 
    return 0;
}
