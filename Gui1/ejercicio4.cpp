#include <iostream>
using namespace std;
int main()
{
 string nombre;
 int cantidad;
 float precio;
 float total;

cout << "el nombre del producto es:" << endl;
cin >> nombre; 

cout << "precio del producto:" <<endl;
cin >> precio;

cout << "la cantidad a comprar del producto es:" << endl;
cin >> cantidad;

total= (cantidad*precio);

cout << "su total al pagar seria:" <<total << endl;

return 0;
}