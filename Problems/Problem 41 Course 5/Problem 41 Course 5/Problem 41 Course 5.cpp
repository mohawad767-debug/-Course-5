// Problem 41 Course 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int PositiveReadNumber(string Message)
{

    int num;
    do
    {

        cout << Message;
        cin >> num;
    } while (num <= 0);

    return num;

}

void FillArray(int Arr[100], int Length)
{


    for (int i = 0;i < Length;i++)
    {
        

        cout << "\nElement[" << i + 1 << "]: ";
        cin >> Arr[i];

    }
}

void PrintArray(int Arr[100], int Length)
{


    for (int i = 0;i < Length;i++)
    {

        cout << Arr[i] << " ";

    }
    cout << "\n";

}



bool CheckPalindrome(int Arr1[100],int Arr1Length)
{
 

   


    for (int i = 0;i <= (Arr1Length/2);i++)
    {
      

        if (Arr1[i] != Arr1[Arr1Length-i-1])
        {
            return false;



        }
     


    }

    return true;


   
}

int main()
{
    
     

     
    int Arr1[100];
    

    int Arr1Length = PositiveReadNumber("Enter the length of array: ");
    

    FillArray(Arr1, Arr1Length);


   



    cout << "\n Array Elements: ";
    PrintArray(Arr1, Arr1Length);

    cout << "\n";

    if (CheckPalindrome(Arr1,Arr1Length))

    {
        cout << "\n yes it is Palindrome";

    }
    else
    {


        cout << "\n No it is not Palindrome";
    }









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
