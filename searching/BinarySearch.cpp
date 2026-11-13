#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = arr[0];
    int e = arr[n - 1];
    int m = ( s + e ) / 2 ;
    int t = 6;
    int ans = -1;

    while(s <= e){
        //mid
        int m = (s + e) /2;

        if(arr[m] == t){
            ans = m;
            break;
        }else if(arr[m] < t){
            s = m + 1;
        }else{
            e = m - 1; 
        }
    }
    cout << ans << endl;
    return 0;
}

//! second method
#include <iostream>
using namespace std;

class Solution {
public:

    int binarySearch(int arr[], int n, int x) {
        int s = 0, e = n - 1;
        int ans = -1;

        while(s <= e){

            int m = s + (e - m) / 2;
            
            if(arr[m] == x){
                ans = m;
                break;
            }else if(arr[m] < x){
                s = m + 1;
            }else{
                e = m - 1;
            }
        }
        return ans;
    }
};