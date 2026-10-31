#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;

    int ori = n;
    int rev = 0;

    while (n > 0) {

        int lastDigit = n % 10;

        rev = (rev * 10) + lastDigit;

        n /= 10;
    }
    // cout << rev << endl;

    //if else condition
    
    // if( ori == rev){
    //     cout << "Palindrome" << endl;
    // }else{
    //     cout << "Not palindrome" << endl;
    // }

    //Ternary operator
    cout << ((ori == rev) ? "Palindrome Number" : "Not Palindrome Number") << endl;
    return 0;
}