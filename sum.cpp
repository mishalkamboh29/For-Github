
#include <iostream>
using namespace std;

int main() {
    const int size = 20;
    int numbers[size];
    int sum = 0;

    cout << "Enter 20 numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    for (int i = 0; i < size; ++i) {
        sum += numbers[i];
    }

    cout << "Sum of all elements in the array: " << sum << endl;

    return 0;
}
