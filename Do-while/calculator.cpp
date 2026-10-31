#include<iostream>
using namespace std;

int main() {
    int choice;
    int a, b, c;
    cout << "-----Welcome to My Calculator-----\n";
    do{
        cout << "Press\n1.Addition\n2.Substraction\n3.Multiply\n4.Division\n5.Modulus\n6.Exit\n";
        cout << "Enter your choice:" << endl;
        cin >> choice;

        if(choice >= 1 && choice <= 4){
            cout << "Enter two Numbers : " << endl;
            cin >> a >> b >> c;
        }

        switch(choice){
            case 1: cout << "+ " << (a + b + c) << endl;
                break;

            case 2: cout << "- " << (a - b - c) << endl;
                break;

            case 3: cout << "* " << (a * b * c) << endl;
                break;

            case 4:
                    if(b > 0 && c > 0)
                        cout << "/ " << (a / b /c) << endl;
                    else
                        cout << "b and c is zero" << endl;
                    
                    break;
            case 5:
                    if(b > 0 && c > 0)
                        cout << "% " << (a % b % c) << endl;
                    else
                        cout << "b and c is zero" << endl;
                    
                    break;

            case 6: break;
            default : cout << "Invalid" << endl;
        }
    }while(choice != 6);

    return 0;
}