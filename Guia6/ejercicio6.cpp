#include "iostream"

using namespace std;
void repeticion (int array[], int tm, int n) 
{
  int repetir = 0;
  for (int i = 0; i < tm; i++)
  {
    
    if (n == array[i])
    {
      repetir++;
    }
     
    }

  cout <<"el numero elegido: " << n << endl;
  cout << "se repite en el arreglo:" << repetir << " vez/veces"<< endl;
  
}


int main()
{
  int array[100], tm, numerodeveces=0;
  int n;

  cout << "Ingrese el tama"<<char(164)<<"o de su arreglo" << endl;
  cin >> tm;
  for (int i= 0; i<tm; i++)
  {
    cout << endl;
    cout << "Ingrese el numero que sera parte de su arreglo" << endl;
    cin >> array[i];
  }
  cout << "Ingrese un numero para discriminar cuantas veces se repite en el arreglo"<<endl;
  cin >> n;

  repeticion (array, tm, n);
  return 0;
 }
