//Shivangi Singh
//prn-24070123148
//B3

#include <iostream>
using namespace std;

int main() {
   const int size = 5;   
    int arr[size];
  for (int i = 0; i < size; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> arr[i];
    }

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
