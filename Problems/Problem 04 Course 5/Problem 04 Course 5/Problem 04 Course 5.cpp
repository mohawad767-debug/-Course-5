// Problem 04 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    }while(num <= 0);


    return num;


}


bool CheckPerfect(int Number)

{
    int sum = 0;

    for (int i = 1;i < Number;i++)
    {
        if (Number % i == 0)
        {


            sum += i;
        }


    }

    return (sum == Number);
}


void PrintPerfect(int Number)
{

    cout << "\n";

    for (int i = 1;i <= Number;i++)
    {
        
        if (CheckPerfect(i))
        {

            cout << i << "  ";

        }


    }
}

int main()
{
    PrintPerfect(ReadPositiveNum("Enter a positive number: "));
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
