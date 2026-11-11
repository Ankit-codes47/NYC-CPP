#include <iostream>
using namespace std;

class Solution {
public:
    void separateInPlace(int arr[], int n) {
        int left = 0, right = n - 1;
        while(left < right){
            if(arr[left] > 0){
                left++;
            }else if(arr[right] < 0){
                right--;
            }else{
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};