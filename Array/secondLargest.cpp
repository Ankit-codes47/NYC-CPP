#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,55,65,56};
    int size = sizeof(arr)/ sizeof(arr[0]);

    int max = (arr[0] > arr[1] )? arr[0] : arr[1];
    int secMax = (arr[0] > arr[1]) ? arr[1] : arr[0];

    for(int i = 2; i < size; i++){
        if(arr[i] > max){
            secMax = max;
            max = arr[i];
        }
        else if(arr[i] > secMax){
            secMax = arr[i];
        }
    }   
    cout << secMax << endl;
    return 0;
}

//! second method
#include <iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int findSecondLargest(int arr[], int n) {
        int max = INT_MIN;
        int secMax = INT_MIN;

        for(int i = 0; i < n; i++){
            if(arr[i] > max){
                secMax = max;
                max = arr[i];
            }else if(arr[i] > secMax && arr[i] != max){
                secMax = arr[i];
            }
        }
        return secMax;
    }
};