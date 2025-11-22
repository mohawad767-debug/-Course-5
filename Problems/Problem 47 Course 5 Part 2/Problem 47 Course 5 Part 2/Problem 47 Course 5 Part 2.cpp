// Problem 47 Course 5 Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float GetFraction(float Number)
{
    return Number - (int)Number;


}


int Myround(float Number)
{
    float Fraction = GetFraction(Number);

    int intnumber = Number;


    if (abs(Fraction) >= .5)
    {
        if (intnumber > 0)
        {

            intnumber++;
        }
        else
        {

            intnumber--;
        }
    }

    return intnumber;





}

int main()
{

    float number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "\nMy round: " << Myround(number) << "\n";
    cout << "\nC++ round: " << round(number) << "\n";
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
