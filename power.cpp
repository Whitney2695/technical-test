//Write a program that takes an integer as input and returns true if the input is a power of two
#include <iostream>
using namespace std;

bool isPowerOfTwo(int num) {
        return num > 0 && (num & (num - 1)) == 0;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (isPowerOfTwo(num))
        cout << "true" << endl;
    else
        cout << "false" ;

    return 0;
}
