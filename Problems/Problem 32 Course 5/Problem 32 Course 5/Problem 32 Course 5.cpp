// Problem 32 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void FillArrayWithRandomNumbers(int Arr[100], int Length)
{


    for (int i = 0;i < Length;i++)
    {

        Arr[i] = RandomNumber(1, 100);

    }

}

void Swap(int& A, int& B)
{

    int Temp = A;
    A = B;
    B = Temp;

}

void ReverseArray(int Arr[100], int Length)
{
    int Counter = Length-1;


    for (int i = 0;i < Length/2;i++)
    {
        Swap(Arr[i], Arr[Counter]);
        Counter--;
     
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

    int Arr[100];


    int Length = ReadPositiveNum("Enter the Length of the array: ");


    FillArrayWithRandomNumbers(Arr, Length);


    cout << "\nOriginal Array: ";
    PrintArray(Arr, Length);


    


    ReverseArray(Arr, Length);




    cout << "\nReversed Array: ";
    PrintArray(Arr, Length);

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
