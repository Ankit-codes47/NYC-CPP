#include <iostream>
using namespace std;

class Solution {
public:
    void reverseInPlace(int arr[], int n) {
        int j = n - 1, i = 0;
        while(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
};