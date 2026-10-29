#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int amount, bill = 0;
    int dis = 0;

    cin >> amount;

    if(amount <= 5000)
        dis = 0;
    else if (amount > 5000 && amount <= 7000)
        dis = 5;
    else if(amount > 7000 && amount <= 9000)
        dis = 10;
    else if(amount > 9000)
        dis = 20;
    
    int disAmt = (amount * dis)/100;
    bill = amount - disAmt;

    cout << fixed << setprecision(2) << bill << endl;
    return 0;
}

//second method

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    double amount, bill = 0;

    int dis = 0;

    cin >> amount;

    if(amount < 500)
        dis = 0;
    else if (amount <= 999)
        dis = 5;
    else if(amount <= 4999)
        dis = 10;
    else if(amount <= 9999)
        dis = 20;
     else
          dis = 30;
    
    int disAmt = (amount * dis)/100.0;
    bill = amount - disAmt;

    cout << fixed << setprecision(2) << bill << endl;

    return 0;
}