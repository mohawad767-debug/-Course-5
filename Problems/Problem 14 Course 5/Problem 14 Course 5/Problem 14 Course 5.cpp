// Problem 14 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

char ReturnLetter(int i)
{
    switch (i)
    {


    case 1:
        return'A';
    case 2:
        return'B';
    case 3:
        return'C';
    case 4:
        return'D';
    case 5:
        return'E';
    case 6:
        return'F';
    case 7:
        return'G';
    case 8:
        return'H';
    case 9:
        return'I';
    case 10:
        return'J';
    case 11:
        return'K';
    case 12:
        return'L';

    case 13:
        return 'M';

    case 14:
        return 'N';

    case 15:
        return 'O';

    case 16:
        return 'P';

    case 17:
        return 'Q';

    case 18:
        return'R';

    case 19:
        return 'S';
    case 20:
        return 'T';

    case 21:
        return 'U';

    case 22:
        return 'V';

    case 23:
        return'W';
    case 24:
        return'X';

    case 25:
        return'Y';

    case 26:
        return 'Z';



    }




}

void PrintInvertedLetterPattern(int Number)
{
    
 
    cout << "\n";
    for (int i = Number;i >=1;i--)
    {
        char Letter = ReturnLetter(i);

        for (int j = 1;j <= i;j++)
        {

            cout << Letter;

        }
        cout << "\n";



    }

}

int main()
{
    PrintInvertedLetterPattern(ReadPositiveNumber("Enter a Positive  number: "));
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
