#include <bits/stdc++.h>
#include <chrono>

using namespace std;
int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

    vector<int> fibonacciDynamic(int n) {
    vector<int> fib(n + 1);
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib;
}

int main() {
    int nValues[] = {10, 25, 30, 40, 50};
    int nSize = sizeof(nValues) / sizeof(nValues[0]);

    for (int i = 0; i < nSize; i++) {
        int n = nValues[i];
        cout << "Fibonacci for n = " << n << std::endl;

        auto start = chrono::high_resolution_clock::now();
        int resultRecursive = fibonacciRecursive(n);
        auto stop = chrono::high_resolution_clock::now();
        cout << "Recursive: " << resultRecursive << " (Time: " << std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() << " microseconds)" << std::endl;

        start = chrono::high_resolution_clock::now();
        vector<int> resultDynamic = fibonacciDynamic(n);
        stop = chrono::high_resolution_clock::now();
        cout << "Dynamic Programming: " << resultDynamic[n] << " (Time: " << std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count() << " microseconds)" << std::endl;
        cout << endl;
    }
    return 0;
}

https://github.com/nurulaisyah19/KUIS2_WEB/blob/main/login.php
