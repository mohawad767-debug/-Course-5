// Problem 30 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int ReadPositiveNum(string message)
{
    int num;

    do
    {

        cout << message;
        cin >> num;

    } while (num <= 0);

    return num;

}

int RandomNumber(int From, int To)
{

    return rand() % (To - From + 1) + From;

}

void FillArray(int Arr[100], int Length)
{
  

    for (int i = 0;i < Length;i++)
    {

        Arr[i] = RandomNumber(1, 100);

    }

}

void SumArrays(int Arr1[100], int Arr2[100], int SumArray[100], int Length)
{


    for (int i = 0;i < Length;i++)
    {

        SumArray[i] = Arr1[i] + Arr2[i];
    }
}


void PrintArray(int Arr[100], int Length)
{
    for (int i = 0;i < Length;i++)
    {

        cout << Arr[i] << " ";
    }
    cout << "\n";
    
    
}


int main()

{
    srand((unsigned)time(NULL));

    int Arr1[100];
    int Arr2[100];
    int SumArray[100];

    int Length = ReadPositiveNum("Enter the number of Elements in the array: ");

    FillArray(Arr1, Length);
    FillArray(Arr2, Length);


    SumArrays(Arr1, Arr2, SumArray, Length);

    cout << "\nArray[1]: ";
    PrintArray(Arr1, Length);
   

    cout << "\nArray[2]: ";
    PrintArray(Arr2, Length);


    cout << "\nSum Array: ";
    PrintArray(SumArray, Length);
    




     
     
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
