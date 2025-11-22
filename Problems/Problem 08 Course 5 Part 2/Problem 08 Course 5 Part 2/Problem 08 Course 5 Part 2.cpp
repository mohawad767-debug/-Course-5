// Problem 08 Course 5 Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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

int CountDigitFrequency(int Number, short Check)
{

    int Remainder = 0, FreqCount = 0;

    while (Number > 0)
    {


        Remainder = Number % 10;
        Number = Number / 10;

        if (Remainder == Check)
        {

           FreqCount++;
        }
    }
    return FreqCount;


}


int main()
{
    int Number = ReadPositiveNum("Enter a Positive Number: ");
    short Check = ReadPositiveNum("Enter the number you want to Check times: ");

    cout << "\n Digit " << Check << " Frequency is " << CountDigitFrequency(Number, Check) <<" Times"<< endl;
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
