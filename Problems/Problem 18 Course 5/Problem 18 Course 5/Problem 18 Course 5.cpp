// Problem 18 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

string ReadName(string message)
{
    string name;
    cout << message;
    cin >> name;
    return name;

}

string EncryptName(string Name)
{

    string EncryptName;
    for (int i = 0;i < Name.length();i++)
    {
        char l = Name[i] + 2;

        EncryptName = string() + EncryptName + l;

    }
    return EncryptName;

}

string DecryptName(string Encrypted)
{
    string DecryptedName;

    for (int i = 0;i < Encrypted.length();i++)
    {

        char l = Encrypted[i] - 2;

        DecryptedName = string() + DecryptedName + l;

    }
    return DecryptedName;

}
int main()
{
    string name = ReadName("Enter yout first name: ");
    string EncryptedName = EncryptName(name);
    string DecryptedName = DecryptName(EncryptedName);


    cout << "\n Name: " << name << endl;
    cout << "Encrypted name: " << EncryptedName << endl;
    cout << "Decrypted name: " << DecryptedName << endl;
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
