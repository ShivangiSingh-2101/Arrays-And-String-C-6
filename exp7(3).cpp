//Shivangi Singh
//prn-24070123148
//B3
#include <iostream>
using namespace std;

int main() {
    const int size = 5;   
    int arr[size];
    int sum = 0;
    float average;

    
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> arr[i];
    }

   
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }


    average = (float)sum / size;

    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0;
}

/*Output
Sum of array elements: 151
Average of array elements: 30.2

*/
