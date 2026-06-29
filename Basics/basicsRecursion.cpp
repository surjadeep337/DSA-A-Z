#include <bits/stdc++.h>
using namespace std;

void countdown(int n) {
    if (n <= 0) {
        return;
    }
    cout << n << " ";
    countdown(n - 1);
}

int main() {
    int startNumber = 5;
    cout << "Starting countdown: ";
    countdown(startNumber);
    return 0;
}
