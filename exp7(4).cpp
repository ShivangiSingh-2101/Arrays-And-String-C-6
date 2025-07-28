//Shivangi Singh
//prn-24070123148
//B3

#include <iostream>
using namespace std;

int main() {
    int arr[] = {21, 18, 36, 32, 44};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Minimum element in the array: " << min << endl;
    cout << "Maximum element in the array: " << max << endl;

    return 0;
}

/*Output 
Minimum element in the array: 18
Maximum element in the array: 44 
*/
