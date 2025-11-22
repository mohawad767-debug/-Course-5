// Problem 26 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int RandomNumber(int From,int To)
{

    int Random = rand() % (To - From + 1) + From;

    return Random;


}


void RandomArray(int Arr[100], int Length)
{
    for (int i = 0;i < Length;i++)
    {
        Arr[i] = RandomNumber(1, 100);
        
    }

   


}


void PrintArray(int Arr[100], int Length)
{

  

    for (int i = 0;i < Length;i++)
    {

        cout << Arr[i] << " ";
        
    }

  


}

int SumArray(int Arr[100], int Length)
{

    int Sum = 0;

    for (int i = 0;i < Length;i++)
    {

        Sum += Arr[i];

    }

    return Sum;

}


int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];

    int Length = ReadPositiveNumber("Enter a Positive Number: ");

    RandomArray(Arr, Length);
   
    cout << "\n Array: ";
    PrintArray(Arr, Length);
    cout << "\n\n";

    cout << "Sum of numbers in Array: " << SumArray(Arr, Length) << endl;

   
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
