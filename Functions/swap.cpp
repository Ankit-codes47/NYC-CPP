#include <iostream>
using namespace std;

void swap(int, int);

int main() {
    int num1 = 10, num2 = 20;
    cout << "Before Calling :\nNum1 = " << num1 << ", Num2 = " << num2 << endl;

    swap(num1, num2);

    cout << "After Calling :\nNum1 = " << num1 << ", Num2 = " << num2 << endl;

    return 0;
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside Calling :\nNum1 = " << a << ", Num2 = " << b << endl;

}