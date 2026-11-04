#include<iostream>
using namespace std;

void greet(string name = "Friend"){
    cout << "Hello, " << name << "!" << endl;
}

int main(){
    string name;
    cin >> name;
    greet(name);
    return 0;
}