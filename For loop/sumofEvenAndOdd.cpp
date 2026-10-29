#include<iostream>
using namespace std;

int main(){
    int n, even = 0, odd = 0;
    cin >> n ;
    for( int i = 1; i <= n; i++){
        if(i%2 == 0)
            even += i;
        else
            odd += i;
    }
    cout << "Even Sum: " <<even<< endl;
    cout << "Odd Sum: "<< odd << endl;
    return 0;
}

// second method
#include<iostream>
using namespace std;

int main(){
    int start, end, even = 0, odd = 0;
    cin >> start >> end ;
    for( int i = start; i <= end; i++){
        if(i%2 == 0)
            even += i;
        else
            odd += i;
    }
    cout << "Even Sum: " <<even<< endl;
    cout << "Odd Sum: "<< odd << endl;
    return 0;
}