#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size]; // declaration of array
    //size fix - static array
    for (int i = 0; i < size; i++)
    {   
        cout << "Enter " << (i + 1) << " element of array:" << endl;
        cin >> arr[i] ;
    }   
    cout << "Element of array are:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}