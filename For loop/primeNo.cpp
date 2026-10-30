#include<iostream>
using namespace std;

int main(){
    int n, c = 0;
    cin >> n ;
    for( int i = 1; i <= n; i++){
        if(n%i == 0)
            c++;
    }
    // if(c == 2){
    //     cout << "Prime" << endl;
    // }else{
    //     cout << "Not Prime" << endl;
    // }
    cout << ((c == 2) ? "Prime" : "Not prime") << endl;
    return 0;
}