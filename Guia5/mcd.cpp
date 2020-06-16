#include "iostream"
#include "cmath"
using namespace std;

int mcd(int num1, int num2)
{
 int residuo;
   if(num1>num2) 
   {
      do
     {
        residuo = num1 % num2;
        if (residuo != 0)  
        {
            num1 = num2; // num1=14 num2=2
            num2 = residuo;
        }
     } while (residuo != 0);
     cout << "Su MCD es:" << num2 << endl;
    }
    else
    {
      do
     {
        residuo = num2 % num1;
        if (residuo != 0)
        {
            num2 = num1;
            num1 = residuo;
        }
     } while (residuo != 0);
     cout << "Su MCD:" << num1 << endl;
    }
  
}


int main(void)
{
    int num1, num2, residuo;
    
    cout << "Bienvenid@, este es un programa para verificar el mcd de dos numeros enteros" << endl << endl;
    cout << "ingresar su primer numero entero" << endl << endl;
    cin >> num1;
    cout << endl << "ingresar su segundo numero entero" << endl << endl;
    cin >> num2;

    mcd(num1, num2);

   return 0;   
}
