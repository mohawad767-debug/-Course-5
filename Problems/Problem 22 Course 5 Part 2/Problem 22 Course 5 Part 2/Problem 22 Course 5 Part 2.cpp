// Problem 22 Course 5 Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadPositiveNumber(string message)
{

    int num;
    do
    {

        cout << message;
        cin >> num;
    } while (num <= 0);

    return num;

}


void ReadArrayData(int Arr[100], int &ArrLength)
{
   ArrLength=  ReadPositiveNumber("Enter the number of Elements in Array: ");;
    cout << "\n";

    for (int i = 0;i < ArrLength;i++)
    {

        cout << "Element[" << i + 1 << "]: ";
        cin >> Arr[i];

    }
    cout << "\n";

}

void PrintArray(int Arr[100], int ArrLength)
{

   
    for (int i = 0;i < ArrLength;i++)
    {

        cout << Arr[i] << " ";
    }
    cout << "\n";



}

int CheckTimes(int Arr[100], int ArrLength,int NumberToCheck)
{

    int Times = 0;

    for (int i = 0;i < ArrLength;i++)
    {
        if (Arr[i] == NumberToCheck)
        {
            Times++;


        }

    }
    return Times;


}

int main()
{
    int Arr[100];
     
    int ArrLength;
   
    int NumberToCheck;

    
    ReadArrayData(Arr, ArrLength);
   NumberToCheck = ReadPositiveNumber("Enter the number you want to check :");

   cout << "\nOriginal Array: ";
    PrintArray(Arr, ArrLength);

    cout << "Number " << NumberToCheck << " is repeated " << CheckTimes(Arr, ArrLength,NumberToCheck )<<" Time(s)\n";


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
