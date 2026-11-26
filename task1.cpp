#include <iostream>

int main() {
    long long fact = 1;
    int n = 1;

    while (fact * (n + 1) <= 2147483647) {
        n++;
        fact *= n;
    }

    std::cout << n << '\n';
}