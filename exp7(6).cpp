//Shivangi Singh
//prn-24070123148
//B3
#include <iostream>
#include <string>

int main() {
    std::string s1, s2, s3;
    

    std::cout << "Enter first string: ";
    std::getline(std::cin, s1);
    
    std::cout << "Enter second string: ";
    std::getline(std::cin, s2);

    s3 = s1 + s2;
    
 
    std::cout << "Concatenated string: " << s3 << std::endl;
    
    return 0;
}
/*Output
Enter first string: Shivangi
Enter second string: Singh
Concatenated string: ShivangiSingh
*/
