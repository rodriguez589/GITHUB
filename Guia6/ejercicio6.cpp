#include <iostream>
using namespace std;

int contadorderepeticiones(int array[], int m, int n)
{
    int conteo = 0;

    for (int i = 0; i < n; i++)
    {
      if(array[i] == m)
      {
        conteo += 1;
      }
    }

    return n;
}


int main()
{
    int n,num;
    int m;
    cout << "Bienvenid@" << endl << endl;
    cout << "Ingresar su numero porfavor:" << endl;
    cin >> m;      
    cout << "Ingresar el tama"<<char((164))<<"o del arreglo:" <<endl;
    cin >> n;
    cout << "ingrese los numeros que se encuentran dentro del array"<<endl;
    cin>> num;
    int array[n];

    int resultado = contadorderepeticiones(array, m, n);

    cout << "la cantidad de repeticones del numero fueron: " <<m << endl; 
    cout << "En el arreglo es:" << resultado << endl;
}