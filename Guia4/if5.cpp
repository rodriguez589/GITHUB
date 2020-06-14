#include "iostream"
#include "string"

using namespace std;
int main()

{
    string palabra;
    char caracter1; 
    char caracter2;

    cout << "Bienvenid@, Esto es un programa para verificar si una palabra ingresada inicia y finaliza con la misma letra:"<< endl << endl;
    cout << "Ingrese una palabra:" << endl;
    cin >> palabra;

    caracter1 = palabra. front();
    caracter2 = palabra. back();

    if (caracter1 == caracter2)
    {
        cout << "La palabra comenzo y finaliza con la misma letra." << endl;
    }
    else
    {
        cout << "La palabra no comenzo, ni finaliza con la misma letra." << endl;
    
    }

 return 0;

}