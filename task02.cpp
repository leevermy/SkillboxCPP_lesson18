#include <iostream>

int WaysNumber(int n, int k = 3) {
    if (n == 0) return 1;
    if (n < 0) return 0;

    int ways_number = 0;
    for (int i = 1; i <= k; ++i) {
        ways_number += WaysNumber(n - i, k);
    }

    return ways_number;
}

int main() {
    std::cout << "Number of ways to reach step is " << WaysNumber(3, 2) << std::endl;
    return 0;
}