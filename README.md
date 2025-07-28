Program 1

Aim
To write a C++ program to print all the elements of a given integer array.

Theory
An array in C++ is a collection of elements of the same data type stored at contiguous memory locations. Arrays are used to store multiple values in a single variable.
The size of the array is the number of elements it can hold.We can access each element of the array by its index (starting from 0).
To print array elements, we iterate through the array using a loop.
sizeof(arr) gives the total size in bytes of the array.
sizeof(arr[0]) gives the size in bytes of a single element.
Dividing these gives the number of elements in the array.

Algorithm

Start
Declare an integer array and initialize it with values {21, 18, 36, 32, 44}.
Calculate the number of elements in the array using size = sizeof(arr) / sizeof(arr[0]).
Use a for loop from i = 0 to i < size.
Inside the loop, print the element at index i.
End the loop.
End the program.

Program 2
Aim
To write a C++ program to search for a specific number in a given integer array and display its position if found, or a message if it is not found.
Theory
Searching is the process of finding a particular element in a data structure such as an array. A linear search is the simplest searching algorithm where each element of the array is checked one by one until the desired element is found or the entire array is traversed.
Arrays store elements sequentially, and each element can be accessed by its index.
Linear search compares the target value with each array element.
If a match is found, the position (index) of the element is returned.
If the element is not found after checking all elements, the search terminates with a "not found" result.

Algorithm

Start
Initialize an integer array with given elements.
Calculate the size of the array.
Take the number to be searched (target) as input from the user.
Set a flag variable found to false and position to -1.
Loop through the array from index 0 to size - 1.
Compare the current element with the target.
If they match:
Set found to true.
Store the current index in position.
Break the loop.
After the loop:
If found is true, print the target number and its position.
Otherwise, print that the number was not found.
End
Program 3
Aim
To write a C++ program to calculate and display the sum and average of elements in a given integer array.

Theory
An array stores multiple elements of the same data type.
The sum is the total of all elements added together.
The average is the sum divided by the total number of elements.
We iterate through the array to accumulate the sum of all elements.
The average is calculated by dividing the sum by the array’s size.

Algorithm

Start
Initialize an integer array with values.
Calculate the size of the array.
Initialize a variable sum to 0.
Loop through the array:
Add each element to sum.
Calculate the average by dividing sum by the size of the array.
Print the sum and average.
End

Program 4
Aim
To write a C++ program to find and display the minimum and maximum elements in a given integer array.

Theory
Arrays are collections of elements stored sequentially.
The minimum element is the smallest value in the array.
\The maximum element is the largest value in the array.
By initializing min and max to the first element, the program compares each subsequent element to update these values accordingly.
Traversing the array once allows finding both minimum and maximum efficiently.

Algorithm

Start
Initialize an integer array with elements.
Calculate the size of the array.
Set min and max to the first element of the array.
Loop from the second element to the last element:
If current element < min, update min.
If current element > max, update max.
After the loop, print the min and max values.
End

Program 6
Aim
To concatenate (join) two or more strings in C++ and produce a single combined string.

Theory
Concatenation means joining two strings end-to-end. In C++, strings can be handled mainly in two ways:
Using C-style strings (character arrays, e.g., char str[])
Using C++ std::string class

Algorithm
Start with two input strings s1 and s2.
Use the + operator or .append() method to join s2 to s1.
Store the result in a new string s3 (or overwrite s1).
Return or display the concatenated string s3.
End
Program 7

Aim
To take a string as input and print its characters in reverse order.

Theory
A string is a sequence of characters. To reverse a string means to rearrange characters so that the last character becomes the first, the second last becomes second, and so on.
In C++, strings can be handled as:
C-style strings (char arrays)
C++ std::string class
Reversing can be done by:
Iterating from the last character to the first and printing each character.
Using built-in functions like std::reverse (in <algorithm>) for std::string.
Manually swapping characters from start and end until the middle.
 Algorithm
Steps:
Read input string s.
Find the length of string n.
Loop from the last character (index n-1) down to the first (index 0).
Print each character during the loop.
End.


