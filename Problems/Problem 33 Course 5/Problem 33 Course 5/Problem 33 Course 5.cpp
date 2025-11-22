// Problem 33 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;

enum enCharType { CapitalLetter = 1, SmallLetter = 2, SpecialLetter = 3, Digit = 4 };

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

int RandomNumber(int From, int To)
{

    return rand() % (To - From) + From;

}

char RandomChar(enCharType Type)
{


    switch (Type)
    {


    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));

    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));

    case enCharType::SpecialLetter:
        return char(RandomNumber(33, 47));


    case enCharType::Digit:
        return char(RandomNumber(49, 57));

    }
 }

string GenerateWord(enCharType Type)
{

    string Word = "";

    for (int i = 0;i < 4;i++)
    {

        Word = Word + RandomChar(Type);
    }

    return Word;




}

string GenerateKey()
{


    string Key = GenerateWord(enCharType::CapitalLetter);

    for (int i = 1;i < 4;i++)
    {


        Key = Key + "-" + GenerateWord(enCharType::CapitalLetter);
    }
    return Key;

}

void FillArrayWithKeys(string Arr[100], int Length)
{

    for (int i = 0;i < Length;i++)
    {

        Arr[i] = GenerateKey();

    }



}

 
void PrintArray(string Arr[100], int Length)
{

    for (int i = 0;i < Length;i++)
    {


        cout << "Arr[" << i << "] :" << Arr[i] << endl << endl;
    }



}

int main()
{
    srand((unsigned)time(NULL));

    string Arr[100];
    int Length = ReadPositiveNumber("Enter the number of keys in the array: ");

    FillArrayWithKeys(Arr, Length);

    cout << "\nArray of Keys: \n\n";

    PrintArray(Arr, Length);

    cout << "\n\n\n\n";



     

      

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
