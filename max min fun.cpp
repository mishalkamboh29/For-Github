#include <iostream>
using namespace std;

int findMax(int num1, int num2, int num3)
 {
    int maxNum = num1;

    if (num2 > maxNum) {
        maxNum = num2;
    }
    if (num3 > maxNum) {
        maxNum = num3;
    }
 cout<<"maximum value of a number"<<endl;
    return maxNum;
}


int findMin(int num1, int num2, int num3)
 {
    int minNum = num1;

    if (num2 < minNum) {
        minNum = num2;
    }
    if (num3 < minNum) {
        minNum = num3;
    }
   cout<<"mainimum value of a number"<<endl;
    return minNum;
}

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int maxNum = findMax(num1, num2, num3);
    int minNum = findMin(num1, num2, num3);

    cout<<"Maximum number: "<<maxNum<<endl;
    cout<<"Minimum number: "<<minNum<<endl;

    return 0;
}

