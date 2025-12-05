// C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int Readnum(string message)
{
	int x;
	do
	{
		cout << message;
		cin >> x;

	} while (x <= 0);

	return x;




}

enum entype {
	small = 1,capital = 2,special = 3,num = 4 };

int random(int from, int to)
{
	return rand() % (to - from + 1) + from;

}

char returrandom(entype type)
{
	switch (type)
	{

	case entype::small:
		return char(random(97, 122));

	case entype::capital:
		return char(random(65,90));

	case entype::special:
		return char(random(33, 47));

	case entype::num:
		return char(random(48, 57));
	}



}

string Generate_part(entype type,short length)
{
	string part = "";

	for (int i = 1;i <= length;i++)
	{
		part += returrandom(type);

	}

	return part;



}

string Generate_Key(short lnum)
{
	string key = Generate_part(entype::capital, lnum);

	for (int i = 1;i <= 3;i++)
	{

		key += "-";
		key += Generate_part(entype::capital, lnum);
	}

	return key;


}

void print_keys(int num,short lnum)
{
	cout << "\n";

	for (int i = 1;i <= num;i++)
	{
		cout << "Key [" << i << "]: " << Generate_Key(lnum) << endl;



	}




}






int main()

{
	

	srand((unsigned) time(NULL));
	print_keys(Readnum("enter the number of keys: "),Readnum("Enter the num of chars in part: "));

	 

	
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
