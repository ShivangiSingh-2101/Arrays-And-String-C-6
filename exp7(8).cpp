#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    
    int start = 0;
    int end = s.length() - 1;
    bool isPalindrome = true;
    
    while (start < end) {
        if (s[start] != s[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    
    if (isPalindrome)
        std::cout << s << " is a palindrome." << std::endl;
    else
        std::cout << s << " is not a palindrome." << std::endl;
    
    return 0;
}
/*Output
Enter a string: MADAM
MADAM is a palindrome
Enter a string: Ballon
Ballon is not a palindrome.

*/
