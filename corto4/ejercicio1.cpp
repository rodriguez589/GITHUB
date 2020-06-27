#include <iostream>

#include <string.h>
using namespace std;

void Codificar();

int main()
{
    Codificar();
}

void Codificar()
{
    cout << "Ingrese una palabra: ";
    char palabra[25];
    cin >> palabra;
    cout << endl;
    for (int i = 0; i < 25; i++)
    {
        switch (palabra[i])
        {
        case 'm':
            cout << "0";
            break;
        case 'u':
            cout << "1";
            break;
        case 'r':
            cout << "2";
            break;
        case 'c':
            cout << "3";
            break;
        case 'i':
            cout << "4";
            break;
        case 'e':
            cout << "5";
            break;
        case 'l':
            cout << "6";
            break;
        case 'a':
            cout << "7";
            break;
        case 'g':
            cout << "8";
            break;
        case 'o':
            cout << "9";
            break;
        case ' ':
            cout << " ";
            break;
        default:
            cout << palabra[i];
            break;
        }
    }
}


