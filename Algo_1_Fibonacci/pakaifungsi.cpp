#include <iostream>
using namespace std;

void fibonacci(int prev2, int prev1, &count) {
    int newFibo;
    if (count < 10) {
        newFibo = prev2 + prev1;
    }
}
int main() {
    int count = 2;
    cout << "0" << " ";
    cout << "1" << " ";
    fibonacci(0, 1);
}