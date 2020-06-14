#include "iostream"
#include "stdlib.h"
#include <math.h>
using namespace std;

int main()
{
int dividendo, divisor, division, residuo;

cout << "Bienvenid@s, esto es un programa para verificar si un numero es divisible entre otro" << endl;
cout << "verificar que el dividiendo sea mayor que el divisor" << endl;
cout << "ingresar su dividendo porfavor" << endl;
cin >> dividendo;
cout << "ingresar su divisor tambien" << endl;
cin >> divisor;

division = dividendo/divisor;
residuo = dividendo%divisor;

cout << "El resultado final de la division es:" << division << endl;
cout << "su respectivo residuo es:" << residuo << endl;

    if(residuo == 0)
    {
    cout << " sus numero si lograran ser divisibles entre si, ya que su residuo seria 0" << endl;

    }
    else
    {
    cout << "en este caso sus numero no seran divisibles entre si, ya que su residuo no sera 0" << endl;
    }

return 0;
}