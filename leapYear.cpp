#include<iostream>
using namespace std;

int main(){
    int year;
    cin >> year;
    if( year % 100  == 0 ){
        if(year % 400 == 0)
            cout << "Leap Year" << endl;
        else 
            cout << "Not a leap year" << endl;
    }else{
        if(year % 4 == 0)
            cout << "Leap Year" << endl;
        else 
            cout << "Not a leap year" << endl;
    }
    return 0;
}

// second method

#include<iostream>
using namespace std;

int main(){
    int year;
    cin >> year;
    if( year % 400 == 0 || (year % 4 == 0 && year % 100 != 0 )){
          cout << "Leap Year" << endl;
     }else{
          cout << "Not a Leap Year" << endl;
     }
    return 0;
}