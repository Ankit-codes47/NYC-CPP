#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    cout << "Enter the name:" << endl;
    cin >> name;
    cout << "Enter the age" << endl;
    cin >> age;
    cout << "Hello \"" << name << "\" you are " << age << " years old." << endl;
    return 0;
}