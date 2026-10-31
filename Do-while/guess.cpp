#include<iostream>
using namespace std;

int main() {
     int  guess, N, secret;
     cin >> secret >> N;

     int count = 0;
     bool found = false;

     do{
          // cout << "Guess the number: " << endl;
          cin >> guess;
          count++;

          if(guess > secret){
               cout << "Too High" << endl;
          }else if(guess < secret){
               cout << "Too Low" << endl;
          }else{
               cout << "Correct" << endl;
               found = true;
          }
     }while(count < N && !found);

     if(!found) {
          cout << "Game Over" << endl;
     }

     return 0;
}