#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;
    int count = 0;

    //for when n = 0 then count = 1
    if(n == 0){
     count = 1;
    }
    
    //for when n > 0 then count the digit
    while(n > 0){
        count++;

        //last digit remove
        n = n / 10;
    }

    cout << count << endl;

    return 0;
}