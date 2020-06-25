#include "iostream"

using namespace std;

void funcionx (int numero [], int t, int n) 
{
  
  int repetir = 0;
  int numeroarreglo = 0;
  for (int i = 0; i < t; i++)
  {
    
    if (n == numero[i])
     {
       repetir++;
       numeroarreglo = numero[i];
      }
  }

   cout <<"el numero" << numeroarreglo << "se repite" << " " << repetir << endl;
}

void funciony (int numero[], int t, int n)
{
  for(int i = 0; i < t; i++)
   {
     if (n == numero[i])
     {
       numero[i] = 0;
      }
        
   }
}

int main()
{
  int numero[100], x, numerodeveces=0;
  cout << endl;

  cout <<"Veces que se repite un numero de dicho arreglo" << endl;
  cout << "ingresar el numero de tama"<<char(164)<<"o del arreglo" << endl;
  cin >> x;
  for (int i= 0; i<x; i++)
  {
    cout << endl;
    cout << i+1 << "digite un numero" << endl;
    cin >> numero[i];
  }
  for(int i = 0; i<x; i++)
  {
    int n=numero[i];
     if(n != 0)
    {
      funcionx (numero, x, n);
      funciony (numero, x, n);
    }
  }
  return 0;
 }
