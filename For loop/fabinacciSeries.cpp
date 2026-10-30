#include<iostream>
using namespace std;

int main(){
    int n, f = 0, s = 1;
    cin >> n ;
    for( int i = 1; i <= n; i++){
        cout << f << endl; 
        int next = f + s;
        //shift
        f = s;
        s = next;
    }
    return 0;
}