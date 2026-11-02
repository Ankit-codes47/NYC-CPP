//V star pattern
#include<iostream>
using namespace std;

int main() {
     int n;
     cin >> n;
    //rows
     for(int i = 1; i <= n; i++){
        //spaces - columns
        for(int j = 1; j < (2 * n); j++){
            if(i == j || i + j == 2 * n){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
