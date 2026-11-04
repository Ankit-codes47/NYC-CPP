#include<iostream>
using namespace std;

void sum(int a, int b, int c){
    int result = a + b + c;
    cout << result;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    sum(a, b, c);
    return 0;
}