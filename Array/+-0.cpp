#include <iostream>
using namespace std;

class Solution {
public:
    void countPosNegZero(int arr[], int n, int result[]) {
        int pos = 0;
        int neg = 0;
        int zero = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                pos++;
            }else if(arr[i] < 0){
                neg++;
            }else if(arr[i] == 0){
                zero++;
            }
        }
        result[0] = pos;
        result[1] = neg;
        result[2] = zero;
    }
};