#include <iostream>
using namespace std;

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
    int count = 2;
    cout << "0" << " ";
    cout << "1" << " ";
    fibonacci(0, 1, count);
}