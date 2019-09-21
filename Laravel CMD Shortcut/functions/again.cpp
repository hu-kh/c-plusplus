#include <iostream>
using namespace std;

void again();

void again()
{
    char yn;
    cout << "--------------------------------------------\n";
    cout << "again? [y/n]\n";

    cin >> yn;
    switch(yn)
    {
        case 'y': case 'Y': system("clear"); menu(); break;
        case 'n': case 'N': system("clear"); exit(0); break;
        default: system("clear"); cout << "only [y/n]\n"; break;
    }
}