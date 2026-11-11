#include <iostream>
using namespace std;

class Solution {
public:
    bool isSorted(int arr[], int n) {
        for(int i = 0; i < n - 1;i++){
            if(arr[i + 1] < arr[i]){
                return false;
                break;
            }
        }
        return true;
    }
};