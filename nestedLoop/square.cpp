#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    
    //outer loop - rows
    for(int i = 1; i <= n; i++){
        //inner loop - columns
        for(int j = 1; j <= n; j++){
            cout << " * " ;
        }
        cout << endl;
    }
    return 0;
}