// Problem 34 Course 5 Part 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Cstdlib>

using namespace std;

int ReadPositiveNumber(string message)
{

    int num;
    do
    {

        cout << message;
        cin >> num;

    } while  (num <= 0);

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

short ReturnNumberPosition(int Arr[100], int Length, int NumberToCheck)
{


    for (int i = 0;i < Length;i++)
    {

        if (Arr[i] == NumberToCheck)
        {
            return i;
        }
    }

    return -1;

}

void Printarray(int Arr[100], int Length)
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
    int Length = ReadPositiveNumber("Enter the number of Elements in array: ");


    FillArray(Arr, Length);

    cout << "\nArray Elements: ";
    Printarray(Arr, Length);
    cout << "\n";

    int NumberToCheck = ReadPositiveNumber("Enter the number you want to check for: ");

    cout << "\nNumber you are looking for is: " << NumberToCheck << endl;
   short Index = ReturnNumberPosition(Arr, Length, NumberToCheck);

    if (Index != -1)
    {
  
        cout << "The number found at Position: " << Index << endl;

        cout << "The number found in order: " << Index + 1 << endl << endl;


    }
    else
    {


        cout << "The number is not found\n\n\n\n";

    }






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
