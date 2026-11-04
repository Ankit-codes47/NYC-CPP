#include<iostream>
using namespace std;

void SI(double p, double t, double r = 5){
    double interest = (p * t * r) / 100;
    cout << interest << endl;
}

int main(){
    int mode;
    cin >> mode;

    double p , t, r;

    if(mode == 1){
        cin >> p >> t;
        SI(p, t);
    }else if(mode == 2){
        cin >> p >> t >> r;
        SI(p, t, r);
    }

    return 0;
}