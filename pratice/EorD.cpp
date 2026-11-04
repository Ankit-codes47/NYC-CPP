#include<iostream>
using namespace std;

void EorD(int a){
    if(a % 2 == 0){
        cout << "Even";
    }else{
        cout << "Odd";
    }
}

int main(){
    int a;
    cin >> a ;

    EorD(a);
    return 0;
}