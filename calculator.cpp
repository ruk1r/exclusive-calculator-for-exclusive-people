#include <iostream>
using namespace std;

int main()
{
    int wybor, num1, num2;

    while(true)
    {

        cout    << "╔═════════════════════════════════╗\n"
                << "║                                 ║\n"
                << "║     CALCULATOR VERSION 1.11     ║\n"
                << "║                                 ║\n"
                << "╚═════════════════════════════════╝\n";

        cout << "Prosze wybrac opcje: \n1. Dodawanie, \n2. Odejmowanie, \n3. Mnozenie, \n4. Dzielenie";
        cout << "\nWybieram opcje: ";
        cin >> wybor;

        switch(wybor){
            case 1:
                cout << "\nWybrano opcje dodawnia.";
                cout << "\nProsze podac pierwsza liczbe: ";
                cin >> num1;
                cout << "Prosze podac druga liczbe: ";
                cin >> num2;
                cout << "Twoj wynik to: " << num1 + num2 << "\n";
                break;
            case 2:
                cout << "\nWybrano opcje odejmowania.";
                cout << "\nProsze podac pierwsza liczbe: ";
                cin >> num1;
                cout << "\nProsze podac druga liczbe: ";
                cin >> num2;
                cout << "Twoj wynik to: " << num1 - num2 << "\n";
        }
    }
}
