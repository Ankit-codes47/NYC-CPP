#include<iostream>
using namespace std;

int main(){
    int amt;
    int n500 = 0, 
        n200 = 0, 
        n100 = 0, 
        n50 = 0,
        n20 = 0, 
        n10 = 0, 
        n5 = 0, 
        n2 = 0, 
        n1 = 0;
    
    cin >> amt;
    
    if(amt >= 500){
        n500 = amt / 500;
        amt = amt % 500;
    }
    if(amt >= 200){
        n200 = amt / 200;
        amt = amt % 200;
    }
    if(amt >= 100){
        n100 = amt / 100;
        amt = amt % 100;
    }
    if(amt >= 50){
        n50 = amt / 50;
        amt = amt % 50;
    }
    if(amt >= 20){
        n20 = amt / 20;
        amt = amt % 20;
    }
    if(amt >= 10){
        n10 = amt / 10;
        amt = amt % 10;
    }
    if(amt >= 5){
        n5 = amt / 5;
        amt = amt % 5;
    }
    if(amt >= 2){
        n2 = amt / 2;
        amt = amt % 2;
    }
    if(amt >= 1){
        n1 = amt / 1;
    }
    cout << "500 = " << n500 << endl;
    cout << "200 = " << n200 << endl;
    cout << "100 = " << n100 << endl;
    cout << "50 = " << n50 << endl;
    cout << "20 = " << n20 << endl;
    cout << "10 = " << n10 << endl;
    cout << "5 = " << n5 << endl;
    cout << "2 = " << n2 << endl;
    cout << "1 = " << n1 << endl;

    return 0;
}