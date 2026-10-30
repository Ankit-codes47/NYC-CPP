#include<iostream>
using namespace std;

int main(){
    int n, f = 0, s = 1;
    cin >> n ;
    for( int i = 1; i <= n; i++){

        if(i == 3) continue;//skip
        cout << i << endl; 

        if(i == 3) break;//stop
        cout << i << endl; 
        
    return 0;
}