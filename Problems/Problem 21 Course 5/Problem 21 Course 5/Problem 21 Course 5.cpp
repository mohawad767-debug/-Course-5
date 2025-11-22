// Problem 21 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
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

int ReadRandom(int From, int To)

{

    int Random = rand() % (To - From + 1) + From;
    return Random;


}


string RandomKey()
{

    string RandomKey = "";

    for (int i = 1;i <= 4;i++)
    {

        RandomKey = RandomKey + char(ReadRandom(65, 90));

    }

    for (int j = 1;j <= 3;j++)
    {

        RandomKey = RandomKey + "-";

        for (int k = 1;k <= 4;k++)
        {

            RandomKey = RandomKey + char(ReadRandom(65, 90));
        }
    }

    return RandomKey;



}

void PrintKeys(int Number)
{
    cout << "\n";

    for (int i = 1;i <= Number;i++)
    {

        cout << "Key[" << i << "]: " << RandomKey() << endl;
    }


}



int main()
{
    srand((unsigned)time(NULL));

    PrintKeys(ReadPositiveNumber("Enter a Positive number: "));


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
