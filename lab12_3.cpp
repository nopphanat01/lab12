#include<iostream>

using namespace std;

void mySwap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << "Before swapping:\n";
    cout << "x = " << x << ", y = " << y << "\n";
    mySwap(x, y);
    cout << "After swapping:\n";
    cout << "x = " << x << ", y = " << y << "\n";
    
    return 0;
}
