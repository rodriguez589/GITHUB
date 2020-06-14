#include "iostream"

using namespace std;

int main()
{
int numero;

cout << "Verificaremos si un numero es positivo, negativo o cero" << endl;
cout << "Ingresar un numero" << endl;
cin >> numero;

    if(numero >=0)
    {
        cout  << " el numero es positivo" << endl;
    }
    else
    {
        cout << " el numero es negativo" << endl;
    }
    if(numero == 0)
    {
       cout  << "su numero es 0" <<endl; 
    }
    
return 0;  
}