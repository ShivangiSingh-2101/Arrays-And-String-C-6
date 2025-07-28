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

