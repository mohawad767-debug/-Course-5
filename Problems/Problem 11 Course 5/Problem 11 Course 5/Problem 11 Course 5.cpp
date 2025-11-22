// Problem 11 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool CheckPalindrome(int Number)
{
    int temp = Number;

    int Remainder = 0, ReverseNum = 0;


    while (Number > 0)
    {

        Remainder = Number % 10;
        Number = Number / 10;

        ReverseNum = ReverseNum * 10 + Remainder;


    }

    if (ReverseNum == temp)
    {

        return 1;
    }
    else
    {

        return 0;
    }



}



int main()
{
    int num = ReadPositiveNum("Enter a Positive number: ");

    if (CheckPalindrome(num))
    {
        cout << "\n" << num << " is a Palindrome number";
    
    }
    else
    {

        cout << "\n" << num << " is not a Palindrome number";
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
