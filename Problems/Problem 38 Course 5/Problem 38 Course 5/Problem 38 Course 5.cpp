// Problem 38 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

 
  
 

#include <iostream>
#include <cstdlib>
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

int RandomNumber(int From, int To)
{


    return rand() % (To - From + 1) + From;

}

void FillArray(int Arr[100], int ArrLength)
{


    for (int i = 0;i < ArrLength;i++)
    {

        Arr[i] = RandomNumber(1, 100);

    }
}

void AddNumber(int Number, int Arr2[100], int& Arr2Length)
{
    Arr2Length++;
    Arr2[Arr2Length - 1] = Number;


}

void CopyOddArray(int Arr1[100], int Arr2[100], int Arr1Length, int& Arr2Length)
{


    for (int i = 0;i < Arr1Length;i++)
    {
        if (Arr1[i] % 2 != 0)
        {

            AddNumber(Arr1[i], Arr2, Arr2Length);
        }
    }


}

void PrintArray(int Arr[100], int ArrLength)
{
 
    for (int i = 0;i < ArrLength;i++)
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
    int Arr1Length, Arr2Length = 0;

    cout << "Enter the number of Elements in Array: ";
    cin >> Arr1Length;

    FillArray(Arr1, Arr1Length);

    CopyOddArray(Arr1, Arr2, Arr1Length, Arr2Length);


    cout << "\nArray1 Elements:  ";
    PrintArray(Arr1, Arr1Length);
    cout << "\n";





    cout << "\nOdd Array: ";
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
