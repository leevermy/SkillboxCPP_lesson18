#include <iostream>

void EvenCount(long long number, int & ans) {
    if (number == 0) return;
    if (number % 2 == 0) {
        ++ans;
    }
    EvenCount(number / 10, ans); 
}

int main() {
    int ans = 0;
    EvenCount(9'223'372'036'854'775'806, ans);
    std::cout << ans;
    return 0;
}