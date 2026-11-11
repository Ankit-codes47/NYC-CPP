#include <iostream>
using namespace std;

class Solution {
public:
    void leftRotateByK(int arr[], int n, int k) {
        k = k % n;
        for(int j = 1; j <= k; j++){
            int temp = arr[0];
            for(int i = 1; i < n; i++){
                arr[i - 1] = arr[i];
            }
            arr[n - 1] = temp;
        }
    }
};