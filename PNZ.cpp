#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N>0)
        cout << "Positive" << endl;
    else if(N<0)
        cout << "Negative" << endl;
    else if(N == 0)
        cout << "Zero" << endl;
    else 
        cout << "Invalid" << endl;
}