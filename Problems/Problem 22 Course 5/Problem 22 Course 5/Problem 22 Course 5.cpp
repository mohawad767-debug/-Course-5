// Problem 22 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadpositiveNumber(string message)
{


    int num;
    do
    {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;

}

void ReadArrayData(int Arr[100], int Length)
{
    cout << "\nEnter Array Elements: ";

    cout << "\n\n";
    
    for (int i = 0;i < Length;i++)
    {
        cout << " Element[" << i + 1 << "]: ";
        cin >> Arr[i];
        cout << "\n";


    }
    cout << "\n";


}

void PrintArray(int Arr[100],int Length)
{
    cout << "\nOriginal Array: ";
    for (int i = 0;i < Length;i++)
    {
        cout << Arr[i]<<" ";
        
    }
    cout << "\n";

}

int CheckRepeatedNum(int Arr[100],int Length, int NumberToCheck)
{

    int Timer = 0;

    for (int i = 0;i <= Length;i++)
    {


        if (NumberToCheck == Arr[i])
        {
            Timer++;
        }
    }

    return Timer;


}

int main()
{
    int Arr[100];
    int Length = ReadpositiveNumber("Enter the number of Array Elements: ");

    ReadArrayData(Arr,Length);


    int NumberToCheck = ReadpositiveNumber("Enter the number you want to check: ");

    PrintArray(Arr, Length);

    int Times = CheckRepeatedNum(Arr, Length, NumberToCheck);

    cout << NumberToCheck << " is repeated " << Times << " time(s)\n\n\n";
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
