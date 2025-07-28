// Shivangi Singh
// prn-2070123148
// B3

#include <iostream>
using namespace std;

int array[5];

int main() {
    
    for (int i = 0; i < 5; i++) {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> array[i];
    }

    int target;
    cout << "Enter the number to find: ";
    cin >> target;

    bool found = false;
    int position = -1;

    for (int i = 0; i < 5; i++) {
        if (array[i] == target) {
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
Enter the element 1: 10
Enter the element 2: 20
Enter the element 3: 36
Enter the element 4: 40
Enter the element 5: 50
Enter the number to find: 36
36 found at position 2 (0-based index).
*/
