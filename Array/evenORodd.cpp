#include <iostream>
using namespace std;

class Solution {
public:
    void countEvenOdd(int arr[], int n, int result[]) {
        int even = 0;
        int odd = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        result[0] = even;
        result[1] = odd;
    }
};