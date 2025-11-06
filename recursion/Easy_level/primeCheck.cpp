#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n, int i = 2) {
    if (n < 2) return false;         // numbers < 2 are not prime
    if (i * i > n) return true;      // no divisors found
    if (n % i == 0) return false;    // found a divisor
    return isPrime(n, i + 1);        // check next divisor
}

int main() {
    cout << isPrime(11);
}
