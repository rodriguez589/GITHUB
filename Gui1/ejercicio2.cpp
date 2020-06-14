#include "iostream"
#include <math.h>
using namespace std;
int main (){

float radio;
float perimetro;
float area;
float pi= 3.1416;

cout << "colocar el radio del circulo." << endl;
cin >> radio;

area = pow(radio,2)*pi;
cout << "el area del circulo es:" <<area << endl;

perimetro = 2*(radio*pi);
cout << "El perimetro del circulo:" <<perimetro << endl;

return 0;
}
