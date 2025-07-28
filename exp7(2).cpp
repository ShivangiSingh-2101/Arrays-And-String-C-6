//Shivangi Singh
//prn-2070123148
//B3
#include <iostream>
using namespace std;

int main() {
    int arr[] = {21, 18, 36, 32, 44};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the number to find: ";
    cin >> target;

    bool found = false;
    int position = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            position = i;
            break;  
        }
    }

    if (found)
        cout << target << " found at position " << position << " (0-based index)." << endl;
    else
        cout << target << " not found in the array." << endl;

    return 0;
}
/*Output
Enter the number to find: 36
36 found at position 2 (0-based index).
Enter the number to find: 50
50 not found in the array.
*/
