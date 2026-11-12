#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, -2, 3, -4, 5};
    int target = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}


//! Second Method
#include <iostream>
using namespace std;

class Solution {
public:

    int linearSearch(int arr[], int n, int x) {
        int ans = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] == x){
                ans = i;
                break;
            }
        }
        return ans;
    }
};