#include <iostream>
using namespace std;
#include <chrono>

int main(){
    auto start = chrono::high_resolution_clock::now();

    int prev2, prev1, newFibo;

    prev2 = 0;
    prev1 = 1;
    cout << prev2 << " " << prev1 << " ";

    for(int i = 2; i < 50; i++){            // 10, 20, 30, 40, 50
        newFibo = prev2 + prev1;
        cout << newFibo << " ";
        prev2 = prev1;
        prev1 = newFibo;
    }
    auto end = chrono::high_resolution_clock::now();

    chrono::duration<double, milli> durasi = end - start;
    cout << "\nRunning time: " << durasi.count() << " ms" << endl;
}