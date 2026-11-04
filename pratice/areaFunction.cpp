#include<iostream>
using namespace std;

int area(int l, int b){
    return l * b;
}

int main(){
    int l, b;
    cin >> l >> b;
    cout << area(l, b);
    return 0;
}