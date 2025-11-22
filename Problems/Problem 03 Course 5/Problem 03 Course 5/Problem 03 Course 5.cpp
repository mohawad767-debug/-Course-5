// Problem 03 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enPerfect { Perfect = 1, NotPerfect = 2 };

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


enPerfect CheckPerfectNum(int num)
{

    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {

            sum += i;

        }
        else

        if (sum == num)
        {


            return enPerfect::Perfect;
        }

        


    }

    return enPerfect::NotPerfect;



}


void PrintPerfect(int num)
{

    if (CheckPerfectNum(num) == enPerfect::Perfect)
    {


        cout << "\n" << num << " is a Perfect number.";
    }

    else
    {

        cout << "\n" << num << " is a not a Perfect number.";
        
    }
}

int main()
{
    PrintPerfect(ReadPositiveNum("Enter a Positive Number: "));
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
