#include "iostream"
#include <math.h>

using namespace std;

int main(){
 double a,b,c,d, x1, x2;
    cout <<"Bienvenid@ a la ecuacion cuadratrica" <<endl;
    cout <<"ingresar el valor de a";
    cin >>a;
    cout << "ingresar el valor de b"; 
    cin >>b;
    cout <<"ingresar el valor de c:";
    cin >>c;
    d =pow(b,2)-(4*a*c);
    if(d<0){
     cout <<"la raiz es compleja" <<endl;   
    }
    else{
        if(d>0){
            cout <<"la raiz no es compleja"<<endl;
                }
        }
    x1=-b+(sqrt(pow(b,2))-(4*a*c))/2*a;
    x2=-b-(sqrt(pow(b,2))-(4*a*c))/2*a;
    cout <<"El discrimante es:"<<d<<endl;
    cout <<"el valor de x1:"<<x1<<endl;
    cout <<"el valor de x2:"<<x2<<endl;  
    
    return 0;
}