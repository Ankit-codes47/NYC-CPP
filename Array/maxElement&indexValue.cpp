#include <iostream>
using namespace std;

class Solution {
public:
    void findMaxAndIndex(int arr[], int n, int result[]) {
        int max = arr[0];
        int maxIndex = 0;
        for(int i = 1; i < n; i++){
            if(arr[i] > max){
                max = arr[i];
                maxIndex = i;
            }
        }
        result[0] = max;
        result[1] = maxIndex;
    }
};