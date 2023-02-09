// Winget Auto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int close = 1, subclose = 1;    // stupid and lazy 
    string appid = "hello";
    while (close == 1)
    {
        int input;
            system("cls");
            std::cout << "1. Install app\n";
            std::cout << "2. Upgarde all\n";
            std::cout << "3. show installed\n";
            std::cout << "0. leave\n";
            cout << "Type a number & press enter: "; 
            cin >> input; // Get user input from the keyboard
        switch (input)
        {
            case 3:
                system("winget list");
                system("pause");
                break;
            case 2:
                system("winget upgrade --all");
                break;
            case 1:
                system("cls");
                while (subclose == 1)
                {
                    cout << "Type name of an app or type exit to leave ";
                    cin >> appid;
                    cout << appid;
                    if (appid == "exit") {
                        subclose = 0;
                        break;
                    }
                    system(("winget install " + appid).c_str()); // string "appid" in a sys call 
                }
              
            case 0:
                close = 0;
                cout << "Have a nice day!"; // added the "a" w0w
                break;
        }
    }
}

