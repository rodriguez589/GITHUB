#include "iostream"
#include "string"
#include "conio.h"

using namespace std;

int main()
{

int nc;
string palabra;
cout << "Bienvenid@, esto es un programa donde verificaremos su palabra donde si es mayor a 10 caracteres o no, tambien analizaremos si la cantidad es par o impar" << endl << endl;
cout << "Ingresar una palabra porfavor"<< endl;
cin >> palabra;

nc = palabra.length();

    if(nc>10)
    {
    cout<< "la palabra se encuentra mayor de 10 caracteres" << endl;

    }
    else
    {
        cout << "La palabra es menor a 10 caracteres" << endl;

    }   
    if ((nc%2)==0)
    {
        cout << "la palabra tiene un numero par de caracteres" << endl;

    }
    else
    {
        cout << "la palabra tiene un numero impar de caracteres" << endl;
    }

return 0;

}