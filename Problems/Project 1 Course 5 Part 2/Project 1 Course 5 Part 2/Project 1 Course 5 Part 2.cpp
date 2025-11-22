// Project 1 Course 5 Part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;


enum enChoice{Stone=1,Paper=2,Scissors=3};

enum enWinner{Player=1,Computer=2,NoWinner=3};

struct StInfo
{

    int NumberOfGames = 0;

    enChoice PlayerChoice;
    enChoice ComputerChoice;

    int NumberOfWinsPlayer = 0;
    int NumberOfWinsComputer = 0;
    int NumberOfDraw = 0;

    enWinner RoundWinner;
    enWinner FinalWinner;




};

int RandomNum(int From, int To)
{



    return rand() % (To - From + 1) + From;

}

int ReadNumInRange(string message,int From, int To)
{

    int num;

    do
    {


        cout << message;
        cin >> num;
    } while (num<From || num>To);

    return num;

}


string SetChoices(enChoice Choice)
{


    switch (Choice)

    {


    case enChoice::Paper:

        return "Paper";

    case enChoice::Scissors:

        return "Scissors";

    case enChoice::Stone:

        return "Stone";

    }
}

string SetWinner(enWinner Winner)
{



    switch (Winner)
    {

    case enWinner::Computer:
        return "Computer";

    case enWinner::Player:
        return "Player 1";

    case enWinner::NoWinner:
        return "No Winner";
    }
}


void PlayersChoices(enChoice &Player1Choice, enChoice &ComputerChoice)
{


    int c1;

    cin >> c1;

    Player1Choice = (enChoice)c1;

    int c2 = RandomNum(1, 3);

    ComputerChoice = (enChoice)c2;







}

 enWinner SetRoundWinner(enChoice Player1Choice, enChoice  ComputerChoice)
{
    if (Player1Choice == enChoice::Stone && ComputerChoice == enChoice::Paper)
    {
        return (enWinner::Computer);



    }

    if (Player1Choice == enChoice::Stone && ComputerChoice == enChoice::Scissors)
    {
        return (enWinner::Player);



    }

    if (Player1Choice == enChoice::Paper && ComputerChoice == enChoice::Scissors)
    {
        return (enWinner::Computer);



    }

    if (Player1Choice == enChoice::Paper && ComputerChoice == enChoice::Stone)
    {
        return (enWinner::Player);



    }

    if (Player1Choice == enChoice::Scissors && ComputerChoice == enChoice::Stone)
    {
        return (enWinner::Computer);



    }

    if (Player1Choice == enChoice::Scissors && ComputerChoice == enChoice::Paper)
    {
        return (enWinner::Player);



    }

    else
    {


        return (enWinner::NoWinner);
    }




    


}

 bool IsPlayerWin(enWinner RounWinner)
 {
     if (RounWinner == enWinner::Player)
     {

         return 1;
     }
     else
     {

         return 0;
     }


}

 bool IsComputerWin(enWinner RounWinner)
 {

     if (RounWinner == enWinner::Computer)
     {

         return 1;
     }
     else
     {

         return 0;
     }
 }

 enWinner FinalWinner(StInfo &ProgramInfo)
 {


     if (ProgramInfo.NumberOfWinsComputer > ProgramInfo.NumberOfWinsPlayer)
     {

         return enWinner::Computer;
     }
     else if(ProgramInfo.NumberOfWinsPlayer>ProgramInfo.NumberOfWinsPlayer)
     {
     
         return enWinner::Player;
     
     }
     else
     {

         return enWinner::NoWinner;
     }

 }

 void PrintResult(StInfo ProgramInfo)
 {




     cout << "\n\t\t\t______________________________________________________\n";
     cout << "\t\t\tGame Over\n";
     cout << "\n\t\t\t________________________________________________________\n";


     cout << "\n\t\t\t___________________[Game Result]_________________________\n";


     cout << "\n\t\t\tGame Rounds       : " << ProgramInfo.NumberOfGames;
     cout << "\n\t\t\tPlayer1 Won Times  : " << ProgramInfo.NumberOfWinsPlayer;
     cout << "\n\t\t\tComputer Won Times : " << ProgramInfo.NumberOfWinsComputer;
     cout << "\n\t\t\tDraw Times        : " << ProgramInfo.NumberOfDraw;
     cout << "\n\t\t\tFinal Winner        : " << SetWinner(ProgramInfo.FinalWinner);

     cout << "\n\t\t\t________________________________________________________\n";

     cout << "\nWould you Like to Play again (Y),(N): ";


 }

 void Program()
 {
     StInfo ProgramInfo;

     ProgramInfo.NumberOfGames = ReadNumInRange("How many Rounds 1 to 10: \n", 1, 10);


     for (int i = 0;i < ProgramInfo.NumberOfGames;i++)
     {


         cout << "\n\nRound [" << i + 1 << "] begins: \n";
         cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";

         PlayersChoices(ProgramInfo.PlayerChoice, ProgramInfo.ComputerChoice);

         cout << "\n________________Round[" << i + 1 << "]_______________\n\n";


         cout << "Player1 Choice: " << SetChoices(ProgramInfo.PlayerChoice) << "\n";
         cout << "Computer Choice: " << SetChoices(ProgramInfo.ComputerChoice) << "\n";

         ProgramInfo.RoundWinner = SetRoundWinner(ProgramInfo.PlayerChoice, ProgramInfo.ComputerChoice);

         cout << "Round Winner     : " << "[" << SetWinner(ProgramInfo.RoundWinner) << "]\n";

         cout << "\n__________________________________________________________\n";


         if (IsComputerWin(ProgramInfo.RoundWinner))
         {
             system("Color 4F");
             ProgramInfo.NumberOfWinsComputer++;
         }
         else

             if (IsPlayerWin(ProgramInfo.RoundWinner))
             {
                 system("Color 2F");
                 ProgramInfo.NumberOfWinsPlayer++;
             }

             else
             {
                 system("Color 6F");

                 ProgramInfo.NumberOfDraw++;
             }







     }


     ProgramInfo.FinalWinner = FinalWinner(ProgramInfo);



     PrintResult(ProgramInfo);




 }


  

       



void ResetProgram()
{


    char x;
    do
    {
        system("cls");
        system("Color 0F");
        Program();

        cin >> x;
    } while (x == 'Y' || x == 'y');

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
