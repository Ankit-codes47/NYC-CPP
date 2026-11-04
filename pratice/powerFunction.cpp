#include<iostream>
using namespace std;

int power(int a, int b = 2){
    int result = 1;

    for(int i = 1; i <= b; i++){
        result *= a;
    }
     
    return result;
}

int main(){
    int mode, a, b;
    cin >> mode ;

    if(mode == 1){
        cin >> a;
        cout << power(a) << endl;
    }else if (mode == 2){
        cin >> a >> b;
        cout << power(a, b) << endl;
    }
    return 0;
}