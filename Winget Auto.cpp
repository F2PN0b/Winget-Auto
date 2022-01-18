// Winget Auto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int close = 1;
    while (close == 1)
    {
        int input;
            system("cls");
            std::cout << "1. List installed software\n";
            std::cout << "2. Upgarde all\n";
            std::cout << "3. Install sofware\n";

            cout << "Type a number & press enter "; // Type a number and press enter
            cin >> input; // Get user input from the keyboard
        switch (input)
        {
            case 1:
                system("winget list");
                system("pause");
                break;
            case 2:
                system("tree");
                break;
            case 0:
                close = 0;
                cout << "Have nice day!";
                break;
        }
    }
}

