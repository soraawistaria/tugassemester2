#include <iostream>
using namespace std;
#include <chrono>

void fibonacci(int prev2, int prev1, int &count) {
    int newFibo;
    if (count < 10) {
        newFibo = prev2 + prev1;
        cout << newFibo << " ";
        prev2 = prev1;
        prev1 = newFibo;
        count += 1;
        fibonacci(prev2, prev1, count);
    }
}
int main() {
    auto start = chrono::high_resolution_clock::now();
    int count = 2;
    cout << "0" << " ";
    cout << "1" << " ";
    fibonacci(0, 1, count);

    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double, milli> durasi = end - start;
    cout << "\nRunning time: " << durasi.count() << " ms" << endl;
}