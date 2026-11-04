#include <iostream>
using namespace std;


//1.function declaration
int fact(int);

//3.function call
int main() {
    int n = 5;
    cout << fact(n) << endl;//argument
    return 0;
}

//2.function implementation, definition
int fact(int n){//parameter
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}