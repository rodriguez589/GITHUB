#include <iostream>
#include "string.h"
#include <cmath>

using namespace std;

//Fuera del main lo cual esta seria siendo la funcion del programa 
int bisiesto(int a)
{
    if (a%4==0 and a%100!=0)
    {
        return true; //puede colocarse como 1 y en el false como 0
    }
    else if(a%400==0)
    {
        return true;

    }
    else 
    {
        return false;
    }
    
} 

int main()
{
    int an;
    int (bisiesto(int a)); 
    cout << "Bienvenid@, Este es un programa para verificar si un a<<(char)164o es bisiesto o no" << endl; //para que reconozocan la letra ñ
    cout << "Coloque el a"<<(char)164<<"o :" << endl; //para que reconozcan la letra ñ
    cin >> an;
    if(bisiesto(an)) // Aqui es donde se conecta la funcion del programa
    {
    cout << "El a"<<(char)164<<"o es bisiesto" << endl;
    }
    else
    {
    cout << "No es bisiesto" << endl;
    }

  return 0;
}

