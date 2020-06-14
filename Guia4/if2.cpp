#include "iostream"

using namespace std;

int main()
{
int numero, par;

 cout << "aqui se verificara si un numero es par o impar"<< endl; 
 cout << "introducir su numero"<< endl;
 cin >> numero;  

 par= numero%2;
    
    if( par == 0)
    {
        cout << "el numero si sera par"<< endl;
    }
    else
    {
        cout << "el numero es impar" << endl;
    }
    
    return 0;
}