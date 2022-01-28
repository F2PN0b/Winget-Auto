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
        std::cout << "1. Asenna sovellus\n";
        std::cout << "2. Paivita kaikki\n";
        std::cout << "3. Asennetetut\n";
        std::cout << "0. Poistu\n";
        cout << "Valintasi: ";
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
                cout << "Kirjoita sovelluksen nimi tai exit jos haluat poistua: ";
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
            cout << "Hyvää paskea";
            break;
        }
    }
}