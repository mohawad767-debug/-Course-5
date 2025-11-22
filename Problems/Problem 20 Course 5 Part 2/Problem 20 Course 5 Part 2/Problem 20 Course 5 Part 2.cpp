// Problem 20 Course 5 Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
using namespace std;

enum enRandom { Small_Letter = 1, Capital_Letter = 2, Special_Character = 3, Number = 4 };

int ReadRandom(int From,int To)

{

    int Random = rand() % (To - From + 1) + From;
    return Random;


}

char ReturnRandom(enRandom Random)
{
    switch (Random)
    {
    case enRandom::Small_Letter:
        return char(ReadRandom(97, 122));

    case enRandom::Capital_Letter:
        return char(ReadRandom(65, 90));

    case enRandom::Special_Character:
        return char(ReadRandom(33, 47));

    case enRandom::Number:

        return char(ReadRandom(48, 57));


    }

}


int main()
{
    srand((unsigned)time(NULL));

    cout << ReturnRandom(enRandom::Small_Letter) << endl;
    cout << ReturnRandom(enRandom::Capital_Letter) << endl;
    cout << ReturnRandom(enRandom::Special_Character) << endl;
    cout << ReturnRandom(enRandom::Number) << endl;

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
