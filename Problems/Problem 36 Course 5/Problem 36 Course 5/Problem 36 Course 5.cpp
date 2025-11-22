// Problem 36 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

enum enChoice { Yes = 1, No = 2 };


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

int Array(int Arr[100])
{

    int Length = 1, Choice = 0;

   for(int i=0;i<Length;i++)

    {
       cout << "\n";
        cout << "Pleas enter a number: ";

        cin >> Arr[i];

        cout << "Do you want to add more numbers? [0]No,[1]Yes? ";
        cin >> Choice;

        enChoice hisChoice = (enChoice)Choice;

        if (hisChoice == enChoice::Yes)
        {

            Length++;
          
        }
        else
        {

            break;
        }


    

    }

   return Length;




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

    int Length = Array(Arr);

    cout << "\n\n\nArray Length: " << Length << endl;
     
    cout << "Array Elements: ";
    PrintArray(Arr, Length);
    cout << "\n\n";
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
