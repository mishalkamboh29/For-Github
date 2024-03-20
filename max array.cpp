#include <iostream>
using namespace std;

int main() {
    int arr[4] = {9, 26, 11, 30};
    
    int max = 0;
    
    for(int i = 1; i<4 ; ++i) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    cout << "the greatest element in the array is " << max << endl;

    return 0;
}
