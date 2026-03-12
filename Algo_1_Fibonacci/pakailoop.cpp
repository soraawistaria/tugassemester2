#include <iostream>
using namespace std;

int main(){
    int prev2, prev1, newFibo;

    prev2 = 0;
    prev1 = 1;

    for(int i; i < 18; i++){
        newFibo = prev2 + prev1;
        cout << newFibo << " ";
        prev2 = prev1;
        prev1 = newFibo;
    }
}