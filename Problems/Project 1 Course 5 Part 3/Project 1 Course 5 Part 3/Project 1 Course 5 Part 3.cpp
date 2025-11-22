// Project 1 Course 5 Part 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>

using namespace std;

enum enChoice { Stone = 1, Paper = 2, Scissors = 3 };

enum enWinner { Player = 1, Computer = 2, Nowinner = 3 };

struct stProgramInfo

{

    int NumOfRounds;
    int NumOfWinPlayer=0;
    int NumOfWinComputer=0;
    int NumOfDraw=0;
    enChoice PlayerChoice;
    enChoice ComputerChoice;

    enWinner RoundWinner;
    enWinner FinalWinner;


   




};

int ReadNumInRange(string message, int From, int To)
{
    int num;

    do
    {

        cout << message;
        cin >> num;

    } while (num<From || num>To);

    return num;



}

int RandomNum(int From, int To)
{



    return rand() % (To - From + 1) + From;
}

void SetChoices(enChoice &Player,enChoice &Computer)
{
    int x;
    cin >> x;

    Player = (enChoice)x;

    int y = RandomNum(1, 3);

    Computer = (enChoice)y;





}

string ReturnChoices(enChoice Choice)
{

    switch (Choice)
    {
    
    case enChoice::Scissors:
        return "Scissors";

    case enChoice::Stone:
        return "Stone";

    case enChoice::Paper:
        return "Paper";

         
         
          
    }
    

}

enWinner SetRoundWinner(enChoice Player, enChoice Computer)
{

    if (Player == enChoice::Paper && Computer == enChoice::Stone)
        return enWinner::Computer;


    if (Player == enChoice::Paper && Computer == enChoice::Scissors)
        return enWinner::Computer;

    if (Player == enChoice::Stone && Computer == enChoice::Scissors)
        return enWinner::Player;

    if (Player == enChoice::Stone && Computer == enChoice::Paper)
        return enWinner::Computer;

    if (Player == enChoice::Scissors && Computer == enChoice::Paper)
        return enWinner::Player;

    if (Player == enChoice::Scissors && Computer == enChoice::Stone)
        return enWinner::Computer;

    else

        return enWinner::Nowinner;
















   


}

string ReturnWinner(enWinner Winner)
{



    switch (Winner)
    {


    case enWinner::Nowinner:
        return "No Winner";

    case enWinner::Computer:
        return "Computer";

    case enWinner::Player:
        return "Player";
    }

}

enWinner SetFinalWinner(stProgramInfo Info)
{

    if (Info.NumOfWinComputer > Info.NumOfWinPlayer)
        return enWinner::Computer;

    if (Info.NumOfWinPlayer > Info.NumOfWinComputer)
        return enWinner::Player;
    else
        return enWinner::Nowinner;

}


void Program()
{
    stProgramInfo ProgramInfo;

    ProgramInfo.NumOfRounds = ReadNumInRange("How Many Rounds 1 to 10 ?\n", 1, 10);

    for (int i = 0;i < ProgramInfo.NumOfRounds;i++)
    {



        cout << "\nRound [" << i + 1 << "] begins:\n";
        cout << "\nYour Choice: [1]:Stone,[2]:Paper,[3]:Scissors ? ";

        SetChoices(ProgramInfo.PlayerChoice, ProgramInfo.ComputerChoice);
        enWinner RoundWinner = SetRoundWinner(ProgramInfo.PlayerChoice, ProgramInfo.ComputerChoice);

        cout << "\n_________________Round[" << i + 1 << "]_________________\n";
        cout << "\nPlayer1 Choice : " << ReturnChoices(ProgramInfo.PlayerChoice);
        cout << "\nComputer Choice: " << ReturnChoices(ProgramInfo.ComputerChoice);
        cout << "\nRound Winner   :" << "[" << ReturnWinner(RoundWinner) << "]";
        cout << "\n__________________________________________\n";

        if (RoundWinner == enWinner::Computer)
        {

            system("Color 4F");
            ProgramInfo.NumOfWinComputer++;

        }
        else if (RoundWinner == enWinner::Player)
        {
            system("Color 2F");
            ProgramInfo.NumOfWinPlayer++;


        }
        else
        {

            system("Color 6F");
            ProgramInfo.NumOfDraw++;
        }


    }

    enWinner FinalWinner = SetFinalWinner(ProgramInfo);

    



        cout << "\n\t\t\t___________________________________________________________\n";
        cout << "\n\t\t\t                       Game Over                                   \n";
        cout << "\n\t\t\t___________________________________________________________\n";

        cout << "\n\t\t\t__________________[Game Results ]__________________________\n";
        cout << "\n\t\t\tGame Rounds        : "<<ProgramInfo.NumOfRounds<<"\n";
        cout << "\n\t\t\tPlayer1 won times  : " << ProgramInfo.NumOfWinPlayer << "\n";
        cout << "\n\t\t\tComputer won times : " << ProgramInfo.NumOfWinComputer << "\n";
        cout << "\n\t\t\tDraw times         : " << ProgramInfo.NumOfDraw << "\n";
        cout << "\n\t\t\tFinal Winner       : " << ReturnWinner(FinalWinner) << "\n";
        cout << "\n\t\t\t___________________________________________________________\n\n";


        cout << "Would you Like to Play again (y),(n): \n";
       

















    





}

void RecetProgram()
{

    char x;
    do
    {
        system("cls");
        system("Color 0F");
        Program();
        cin >> x;



    } while (x == 'y' || x == 'Y');

}



int main()
{
    srand((unsigned)time(NULL));

    RecetProgram();
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
