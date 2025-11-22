// Problem 40 Course 5 Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to common functions.

// Function: FillArray
// Purpose: Initializes the source array with predefined numbers, some of which are duplicates.
// Parameters:
//   - arr: The source array to be filled (with capacity of 100).
//   - arrLength: A reference variable to store the number of elements filled in the array.
void FillArray(int arr[100], int& arrLength)
{
    arrLength = 10;  // Set the array length to 10 elements.

    // Manually assign values to the array elements.
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

// Function: PrintArray
// Purpose: Prints the elements of an integer array, separated by spaces.
// Parameters:
//   - arr: The array to be printed.
//   - arrLength: The number of elements in the array.
void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";  // Print each element followed by a space.
    cout << "\n";  // Move to the next line after printing the array.
}

// Function: FindNumberPositionInArray
// Purpose: Searches for a given number in an array and returns its index if found.
// Parameters:
//   - Number: The number to search for.
//   - arr: The array in which to search.
//   - arrLength: The number of elements in the array.
// Returns: The index of the number if found; otherwise, returns -1.
short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;  // Return the index as soon as the number is found.
    }
    // If the number is not found, return -1.
    return -1;
}

// Function: IsNumberInArray
// Purpose: Determines if a given number exists in an array.
// Parameters:
//   - Number: The number to search for.
//   - arr: The array in which to search.
//   - arrLength: The number of elements in the array.
// Returns: true if the number is found; false otherwise.
bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

// Function: AddArrayElement
// Purpose: Adds a new element to the end of an array and updates its length.
// Parameters:
//   - Number: The number to add.
//   - arr: The array to which the number will be added.
//   - arrLength: A reference variable representing the current number of elements in the array.
// Behavior: Increments arrLength and places the new element at the last index.
void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;             // Increase the array length by 1.
    arr[arrLength - 1] = Number;  // Place the new element at the new last index.
}

// Function: CopyDistinctNumbersToArray
// Purpose: Copies only distinct (non-duplicate) numbers from the source array to the destination array.
// Parameters:
//   - arrSource: The source array from which numbers will be copied.
//   - arrDestination: The destination array where distinct numbers will be stored.
//   - SourceLength: The number of elements in the source array.
//   - DestinationLength: A reference variable that tracks the number of elements in the destination array.
void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
{
    // Loop through each element in the source array.
    for (int i = 0; i < SourceLength; i++)
    {
        // If the current element is not already in the destination array...
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
        {
            // ...then add it to the destination array.
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
    }
}

// Main function: Program entry point.
int main()
{
    int Arr1[100];
    int Arr2[100];

    int Arr1Length = 0;
    int Arr2Length = 0;

    FillArray(Arr1, Arr1Length);

    cout << "\nArray Elements: ";
    PrintArray(Arr1, Arr1Length);
    cout << "\n";

    CopyDistinctNumbersToArray(Arr1, Arr2, Arr1Length, Arr2Length);


        cout << "\nDistinct Elements: ";
    PrintArray(Arr2, Arr2Length);
    cout << "\n";


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
