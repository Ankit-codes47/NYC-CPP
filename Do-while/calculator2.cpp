
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    int a, b;
    char op;
    int i = 0;

    do {
        cin >> a >> b >> op;

        if (op == 'q') {
            break;
        }

        switch (op) {
            case '+':
                cout << a + b << endl;
                break;

            case '-':
                cout << a - b << endl;
                break;

            case '*':
                cout << a * b << endl;
                break;

            case '/':
                if (b == 0)
                    cout << "Cannot divide by zero" << endl;
                else
                    cout << (double)a / b << endl;
                break;

            case '%':
                if (b == 0)
                    cout << "Cannot divide by zero" << endl;
                else
                    cout << a % b << endl;
                break;

            default:
                cout << "Invalid operator" << endl;
        }

        i++;

    } while (i < T);

    return 0;
}
