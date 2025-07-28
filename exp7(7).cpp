//Shivangi Singh
//prn-24070123148
//B3
#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    
    std::cout << "Reversed string: ";
    for (int i = s.length() - 1; i >= 0; i--) {
        std::cout << s[i];
    }
    std::cout << std::endl;
    
    return 0;
}
/*Output
Enter a string: Pratik
Reversed string: kitarP
*/
