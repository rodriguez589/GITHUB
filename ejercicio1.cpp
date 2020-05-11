#include "iostream"

using namespace std;

int main(){

    float num1;
    int num2;
    float num3;
    float promedio;
    float div;

    cout <<"bienvenid@, colocar su primer numero entero aqui" <<endl;
    cin >> num1;
    
    cout << "ingresar su segundo numero entero aqui" <<endl;
    cin >> num2;

    cout << "ingresar su tercer numero entero aqui" <<endl;
    cin >> num3;

    promedio= (num1+num2+num3)/3.0;
    cout <<"el total de su promedio es:" << promedio << endl;

    return 0;
}