//Shivangi Singh
//prn-24070123148
//B3
#include <iostream>
using namespace std;

int main() {
    int arr[] = {21, 18, 36, 32, 44};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
//Output:
/* 
21 18 36 32 44 
*/
