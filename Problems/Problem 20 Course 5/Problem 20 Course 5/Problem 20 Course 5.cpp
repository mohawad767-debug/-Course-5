// Problem 20 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

enum enRandom { Small_Letter = 1, Capital_Letter = 2, Special_Character = 3, Number = 4 };

void PrintRand(enRandom Random)
{
	switch (Random)
	{

	case enRandom::Small_Letter:
		cout << char(rand() % (122 - 97 + 1) + 97) << endl;
		break;

	case enRandom::Capital_Letter:
		cout << char(rand() % (90 - 65 + 1) + 65) << endl;
		break;

	case enRandom::Special_Character:
		cout << char(rand() % (47 - 33 + 1) + 33) << endl;
		break;

	case enRandom::Number:
		cout << (rand() % (10 - 1 + 1) + 10) << endl;
		break;


	}

	
	
	
	




}



int main()
{
    srand((unsigned)time(NULL));

	PrintRand(enRandom::Small_Letter);
	PrintRand(enRandom::Capital_Letter);
	PrintRand(enRandom::Special_Character);
	PrintRand(enRandom::Number);
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
