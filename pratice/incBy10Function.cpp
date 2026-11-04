#include<iostream>
using namespace std;

void increment(int &a){
    a = a + 10;
    cout << a;
}

int main(){
    int a;
    cin >> a;

    increment(a);
    return 0;
}