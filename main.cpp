#include <iostream>

using namespace std;

void swapAddress(int *a, int *b) {
    int tempAddress = *a;
    *a = *b;
    *b = tempAddress;
}

int main() {
    int a = 10;
    int b = 20;

    swapAddress(&a, &b);

    cout << a << " " << b;
    return 0;
}
