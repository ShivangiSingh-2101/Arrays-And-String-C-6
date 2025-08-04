//Shivangi Singh
//24070123148
//B3
#include <iostream>
using namespace std;

int main() {
    
    string word;
    cout << "Enter a single word (cin): ";
    cin >> word;
    cout << "You entered (cin): " << word << "\n\n";


  
    string line;
    cout << "Enter a full line (getline): ";
    getline(cin, line);
    cout << "You entered (getline): " << line << "\n\n";


    cout << "Enter characters one by one (press Enter to stop): ";
    char ch;
    while ((ch = cin.get()) != '\n') {
        cout << "You entered character: " << ch << "\n";
    }
    cout << "\n";


    char charArray[100];
    cout << "Enter a line (cin.getline with char array): ";
    cin.getline(charArray, 100);
    cout << "You entered (char array): " << charArray << "\n\n";

    string fullName;
    int age;

    cout << "Enter your age (cin): ";
    cin >> age;
    cin.ignore(); 

    cout << "Enter your full name (getline after cin): ";
    getline(cin, fullName);
    cout << "Name: " << fullName << ", Age: " << age << "\n";

    return 0;
}
/*Output Enter a single word (cin): Shivangi 
You entered (cin): Shivangi

Enter a full line (getline): NOT LIKE US
You entered (getline): NOT LIKE US

Enter characters one by one (press Enter to stop): BLU
You entered character: B
You entered character: L
You entered character: U


Enter a line (cin.getline with char array): this is my time
You entered (char array):  this is my time

Enter your age (cin): 99
Enter your full name (getline after cin):Shivangi Singh
Name:  Shivangi Singh Age: 99

*/
