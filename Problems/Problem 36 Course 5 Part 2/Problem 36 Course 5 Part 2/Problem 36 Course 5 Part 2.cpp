// Problem 36 Course 5 Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int ReadNumber()
{


    int num;
    cin >> num;
    return num;

}

void AddNumber(int Number, int Arr[100], int &Length)
{

    Length++;
    Arr[Length - 1] = Number;

}

void FillArray(int Arr[100],int &Length)
{



    bool Decision = true;

    do
    {

        cout<< "Please,enter a number: ";
        AddNumber(ReadNumber(), Arr, Length);

        cout << "Do you want to add another number?[0]No,[1]Yes: ";
        cin >> Decision;

        cout << "\n\n\n";
    } while (Decision);
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
    int Arr[100];
    int Length = 0;



    FillArray(Arr, Length);

    cout << "\nArray Length: " << Length;
    cout << "\nArray Elements: ";
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
