// Problem 33 Course 5 Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

enum encharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{

    int Random = rand() % (To - From + 1) + From;
    return Random;

}

char GetRandomCharacter(encharType CharType)
{

    switch (CharType)
    {
    case encharType::SmallLetter:
        return char(RandomNumber(97, 122));

    case encharType::CapitalLetter:
        return char(RandomNumber(65, 90));

    case encharType::SpecialCharacter:
        return char(RandomNumber(33, 47));

    case encharType::Digit:

        return char(RandomNumber(48, 57));


    }


}

string GenerateWord(encharType CharType, short Length)
{
    string Word;


    for (int i = 1;i <= Length;i++)
    {
        Word = Word + GetRandomCharacter(CharType);

    }

    return Word;

}

string GenerateKey()
{

    string Key;

    Key = Key + GenerateWord(encharType::CapitalLetter, 4);

    for (int i = 1;i <= 3;i++)
    {

        Key = Key + "-" + GenerateWord(encharType::CapitalLetter, 4);

    }

    return Key;

}

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

void FillArrayofKeys(string Arr[100], short Length)
{
    for (int i = 0;i < Length;i++)
    {


        Arr[i]=GenerateKey();
    }


}
void PrintKeys(string Arr[100], short Length)
{


   
    for (int i = 0;i < Length;i++)
    {

        cout << "Key[" << i << "]: " << Arr[i] << endl << endl;
    }
    cout << "\n";



}


int main()
{
    srand((unsigned)time(NULL));

    string Arr[100];

    int Length = ReadPositiveNumber("Enter the number of Keys in the Array: ");


    FillArrayofKeys(Arr, Length);

    cout << "\nArray of Keys: \n\n";
    PrintKeys(Arr, Length);
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
