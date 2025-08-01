#include <bits/stdc++.h>
using namespace std;

// 1. Sum of first n numbers
int find_sum(int n) {
    if(n == 0) return 0;
    return n + find_sum(n - 1);
}

// 2. Sum of digits
int sumOfDigits(int n) {
    if(n == 0) return 0;
    return sumOfDigits(n / 10) + n % 10;
}

// 3. Factorial of n
int factorial(int n) {
    if(n == 0) return 1;
    return n * factorial(n - 1);
}

// 4. nth Fibonacci number
int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;

    cout << find_sum(n) << endl;        // Output: Sum from 1 to n (e.g., 10 => 55)
    cout << sumOfDigits(n) << endl;     // Output: Sum of digits (e.g., 123 => 6)
    cout << factorial(n) << endl;       // Output: n! (e.g., 5 => 120)
    cout << fibonacci(n) << endl;       // Output: nth Fibonacci number (e.g., 7 => 13)

    return 0;
}
