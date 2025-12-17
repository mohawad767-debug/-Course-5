// Problems2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;

float myabs(float num)
{

	if (num >= 0)
		return num;
	else
		return -1 * num;


}

int myround(float num)
{
	/*
	if(num>=0)
	   return (int)(num + .5);
	else
		return (int)(num -.5);
		*/


	int temp = num;

	if (abs(num-temp) < .5)
	{
		return temp;


	}
	else
	{
		if (num > 0)
		{
			return temp+=1;
		}
		else
		{
			return temp-=1;
		}

	}
	
}

int myfloor(float num)
{
	if (num >= 0)
	{
		return num;

	}
	else

	{
		if (num - (int)num != 0)
		{
			return num - 1;
		}
		else
		{
			return num;
		}

		

	}
		



}

int myceil(float num)
{
	if (num > 0)
	{
		if (num - (int)num != 0)
		{
			return num + 1;
		}
		else
		{
			return num;
		}
	
	}
	else
	{
		return num;



	}


}

int mysqrt(int num)
{

	return pow(num, .5);

}








int main()
{
	float num;
	cout << "enter a number: ";
	cin >> num;


	cout << "my sqrt " << mysqrt(num) << endl;
	cout << "C++ sqrt " << sqrt(num) << endl;


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
