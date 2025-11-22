// Project 1 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;

enum enchoice { Stone = 1, Paper = 2, Scissors = 3 };

struct Stinfo
{
	enchoice Player1Choice;
	enchoice ComputerChoice;

	string TotalWinner;
	int NumberOfGames = 0;
	int NumofWinPlayer = 0;
	int NumOfWinComputer = 0;
	int Draw = 0;

};

int ReadNumInRange(string message, int From, int To)
{
	int num;
	do
	{

		cout << message;
		cin >> num;

	} while (From > num || num > To);

	return num;

}

int RandomNumber(int From, int To)
{

	return rand() % (To - From + 1) + From;

}


void Choices( enchoice &Playerchoice,enchoice &Computerchoice)
{


	int c1, c2;

	cin >> c1;
	Playerchoice = (enchoice)c1;

	c2 = RandomNumber(1, 3);

	Computerchoice = (enchoice)c2;

	


}



string SetWinner(enchoice Player, enchoice Computer)
{

	if (Computer == enchoice::Paper && Player == enchoice::Scissors)
	{

		return "[Player1]";
	}
	
			if (Computer == enchoice::Paper && Player == enchoice::Stone)
			{

				return "[Computer]";
			}

			
				if (Computer == enchoice::Stone && Player == enchoice::Paper)
				{

					return "[Player1]";
				}


				
					if (Computer == enchoice::Stone && Player == enchoice::Scissors)
					{

						return "[Computer]";
					}

					
						if (Computer == enchoice::Scissors && Player == enchoice::Paper)
						{

							return "[Computer]";
						}


					
							if (Computer == enchoice::Scissors && Player == enchoice::Stone)
							{

								return "[Player1]";
							}


							else
							{



								return "[No Winner]";

							}



	   
  


}


string  returnChoice(enchoice Choice)
{ 

	switch (Choice)
	{


	case enchoice::Scissors:
		return "Scissors";

	case enchoice::Paper:
		return "Paper";


	case enchoice::Stone:

		return "Stone";
	 }
	 
	 
	  


}


bool IsPlayerWin(enchoice Player, enchoice Computer)
{

	if (SetWinner(Player, Computer) == "[Player1]")
	{

		return 1;
	}

	
	return 0;

}

bool IsComputerWin(enchoice Player, enchoice Computer)
{

	if (SetWinner(Player, Computer) == "[Computer]")
	{

		return 1;
	}


	return 0;

}

string TotalWinner(Stinfo &ProgramInfo)
{


	if (ProgramInfo.NumofWinPlayer > ProgramInfo.NumOfWinComputer)
	{
		ProgramInfo.TotalWinner = "Player";

		return ProgramInfo.TotalWinner;
	}
	else
		if(ProgramInfo.NumOfWinComputer>ProgramInfo.NumofWinPlayer)
	{
			ProgramInfo.TotalWinner = "Computer";
			return ProgramInfo.TotalWinner;
		
	}

		else
		{
			ProgramInfo.TotalWinner = "No Winner";
			return ProgramInfo.TotalWinner;
		}



}



void PrintResult(Stinfo ProgramInfo)
{


	cout << "\t\t\t\t__________________________[Game Result]_____________________________\n\n";

	cout << "\t\t\t\tGame Rounds\t   : " << ProgramInfo.NumberOfGames << "\n";
	cout << "\t\t\t\tPlayer1 Won Times  : " << ProgramInfo.NumofWinPlayer << "\n";
	cout << "\t\t\t\tComputer Won Times : " << ProgramInfo.NumOfWinComputer << "\n";
	cout << "\t\t\t\tDraw Times\t   : " << ProgramInfo.Draw << "\n";
	cout << "\t\t\t\tFinal Winner\t   : " << ProgramInfo.TotalWinner << "\n";

	cout << "\t\t\t\t_______________________________________________________________\n\n";


}



void Program()
{


	Stinfo ProgramInfo;





	ProgramInfo.NumberOfGames = ReadNumInRange("Enter a number between 1 and 10?\n", 1, 10);


	for (int i = 0;i < ProgramInfo.NumberOfGames;i++)
	{
		cout << "\nRound[" << i + 1 << "] begins:\n";

		cout << "\nYour choice: [1]:Stone, [2]:Paper, [3]:Scissors ?: ";

	
		Choices(ProgramInfo.Player1Choice, ProgramInfo.ComputerChoice);
		cout << "\n_______________Round[" << i + 1 << "]_______________\n";

		
		cout << "Player1 Choice: " << returnChoice(ProgramInfo.Player1Choice) << "\n";
		cout << "Computer Choice : " << returnChoice(ProgramInfo.ComputerChoice) << "\n";
		cout << "Round Winner    : "<<SetWinner(ProgramInfo.Player1Choice, ProgramInfo.ComputerChoice)<<"\n";

		cout << "\n_________________________________________\n\n";

		if (IsComputerWin(ProgramInfo.Player1Choice, ProgramInfo.ComputerChoice))
		{
			cout << "\a";
			system(" color 4F");
			ProgramInfo.NumOfWinComputer++;

	
		}
		else
			if (IsPlayerWin(ProgramInfo.Player1Choice, ProgramInfo.ComputerChoice))
			{

				system(" color 2F");
				ProgramInfo.NumofWinPlayer++;
		  }

			else
			{
				system("color 6F");

				ProgramInfo.Draw++;
			}







	}


	ProgramInfo.TotalWinner = TotalWinner(ProgramInfo);

	cout << "\t\t\t\t_______________________________________________________________\n\n";

	cout << "\t\t\t\t\t\t\t\tGame Over\n\n";

	cout << "\t\t\t\t_______________________________________________________________\n\n";


	PrintResult(ProgramInfo);

	
}



void ResetProgram()
{

	char x;

	do
	{
		system("Cls");
		system("Color 0F");

		Program();

		cout << "\n Would you Like To Play Again: (y,n): ";

		cin >> x;

	} while (x == 'Y'|| x == 'y');
}


int main()
{
	 
	 
	 
	ResetProgram();
	 

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
