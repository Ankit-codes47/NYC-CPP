#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int unit;
    double bill = 0; 

    cin >> unit ;
    if(unit > 300){
        bill += (unit- 300)*5.00;
        unit = 300;
    }
    if(unit > 200){
        bill +=(unit - 200)*4.00;
        unit = 200;
    }
    if(unit > 100){
        bill +=(unit - 100)* 2.50;
        unit = 100;
    }

    bill += unit * 1.50 + 50;

    cout << fixed << setprecision(2) << bill << endl;

    return 0;
}