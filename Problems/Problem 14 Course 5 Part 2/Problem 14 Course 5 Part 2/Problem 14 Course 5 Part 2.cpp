// Problem 14 Course 5 Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

void PrintInvertedLetterPattern(int Number)
{
    cout << "\n";

    for (int i = 65 + Number - 1;i >= 65;i--)
    {
        for (int j = 1;j <= (i - 65 + 1);j++)
        {
            cout << char(i);


        }
        cout << "\n";


    }



}


void PrintPattern(int Number)
{
    cout << "\n";

    for (int i = Number;i >= 1;i--)
    {


        for (int j = 1;j <= i;j++)
        {


            cout << char(i + 64);
        }

        cout << "\n";
    }


}

int main()
{
   // PrintInvertedLetterPattern(ReadPositiveNumber("Enter a Positive number: "));
    PrintPattern(ReadPositiveNumber("Enter a Positive number: "));
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
