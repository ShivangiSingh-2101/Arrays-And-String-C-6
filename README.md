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
