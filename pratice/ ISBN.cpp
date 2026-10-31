#include<iostream>
using namespace std;

int main(){
    string n ;
    int sum = 0;

    cin >> n ;

    for(int i = 0; i < 10; i++){
          sum += (n[i] - '0') * (10 -i);
    }
    if(sum == 0){
          cout << "false" << endl;
    }else if(sum % 11 == 0){
          cout << "true" << endl;
    }else{
          cout << "false" << endl;
    }
    
    return 0;
}