#include <iostream>
using namespace std;

class Solution {
public:
    void separateIntegers(int arr[], int n, int result[]) {
        int left = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                result[left] = arr[i];
                left++;
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i] < 0){
                result[left] = arr[i];
                left++;
            }
        }
    }
};