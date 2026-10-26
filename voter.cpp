#include<iostream>
using namespace std;

int main(){
    int age;
    cin >> age;
    if( age >= 18){
        cout << "Valid Voter" << endl;
    }else{
        cout << "Invalid Voter" << endl;
    }
}