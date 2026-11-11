#include <iostream>
using namespace std;

class Solution {
public:
    void reverseArray(int arr[], int n, int result[]) {
        for(int i = 0; i < n; i++){
            result[i] = arr[n - 1 - i];
        }
    }
};