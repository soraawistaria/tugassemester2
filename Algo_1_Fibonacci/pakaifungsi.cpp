#include <iostream>
using namespace std;
#include <chrono>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    auto start = chrono::high_resolution_clock::now();
    cout << fibonacci(10);                          // 10, 20, 30, 40, 50

    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double, milli> durasi = end - start;
    cout << "\nRunning time: " << durasi.count() << " ms" << endl;
}