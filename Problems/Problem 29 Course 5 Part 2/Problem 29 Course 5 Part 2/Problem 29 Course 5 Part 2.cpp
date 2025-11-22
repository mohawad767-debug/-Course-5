// Problem 29 Course 5 Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

enum enPrime { Prime = 1,NotPrime = 2 };

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

enPrime CheckPrime(int Number)
{

    if (Number <= 2)
    {
        return enPrime::Prime;
    }

    for (int i = 2;i <= round(Number / 2);i++)
    {

        if (Number % i == 0)
        {
            return enPrime::NotPrime;
        }
    }

    return enPrime::Prime;


}

int RandomNumber(int From, int To)
{

    return rand() % (To - From + 1) + From;

}

void FillArray(int Arr[100], int& ArrLength)
{
    ArrLength = ReadPositiveNumber("Enter the number of Elements in Array: ");

    for (int i = 0;i < ArrLength;i++)
    {

        Arr[i] = RandomNumber(1, 100);
    }


}

void CopyPrimeNumbers(int Arr1[100], int Arr2[100], int Arr1Length,int &Arr2Length)
{
    int Counter = 0;

    for (int i = 0;i < Arr1Length;i++)
    {

        if (CheckPrime(Arr1[i]) == enPrime::Prime)
        {
            Arr2[Counter] = Arr1[i];
            Counter++;


        }
    }

    Arr2Length = Counter - 1;



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
    int Arr1Length = 0;
   

    int Arr2[100];
    int Arr2Length = 0;

    FillArray(Arr1, Arr1Length);

 
    CopyPrimeNumbers(Arr1, Arr2, Arr1Length, Arr2Length);


    cout << "\nArray: ";
    PrintArray(Arr1, Arr1Length);


    cout << "\nPrime numbers in the Array: ";
    PrintArray(Arr2, Arr2Length);

   
    



    

    
     
    
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
