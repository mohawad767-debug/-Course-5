// Problem 17 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

string ReadPassword(string message)
{
    string pass;
    do
    {

        cout << message;
        cin >> pass;
    } while (pass.length() != 3);

    return pass;

}

void PrintPassword()
{
    string Password = ReadPassword("Enter a Password of 3 Capital Letters: ");
    int counter = 0;

    
    for (char i = 'A';i <= 'Z';i++)
    {
        for (char j = 'A';j <= 'Z';j++)
        {
            for (char k = 'A';k <= 'Z';k++)
            {
                counter++;

                if (Password[0] == i && Password[1] == j && Password[2] == k)
                {
                    cout << "Trial[" << counter << "] is: " << Password << "\n\n";
                    cout << "Password is " << Password << endl;
                    cout << "Found after " << counter << " Trials";

                    return;

                }
                else
                {

                    cout << "Trial[" << counter << "] is: " << i << j << k << endl;
                }

            }



        }


    }




}
int main()
{
    PrintPassword();
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
