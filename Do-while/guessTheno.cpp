#include<iostream>
using namespace std;

int main(){
    int guess;

    srand(time(0));
    int r = rand() % 10 + 1;

    do{
        cout << "Guess the number between 1-10: " << endl;;
        cin >> guess;

        if(guess > r){
            cout << "Too high, guess the smaller number!!" << endl;
        }else if(guess < r){
            cout << "Too low, guess the higher number!!" << endl;
        }else{
            cout << "Congrats, your guess is correct!!" << endl;
        }
    }while(guess != r);

    return 0;
}