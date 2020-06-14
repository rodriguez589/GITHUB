#include "iostream"

using namespace std;

float Calcular(int hNormales, int hExtras);

int main ()
{

 int N, hNormales, hExtras;
   cout << "Bienvenid@s" << endl;
   cout << "porfavor ingresar la cantidad de empleados" << endl;
   cin >> N;
   for(int i = 0; i<N; i++){
   cout << "ingresar horas normales realizadas" << endl;
   cin >> hNormales;
   cout << "ingresar horas extra realizadas" << endl;
   cin >> hExtras;

    Calcular(hNormales, hExtras);
  }
  return 0;  
}

float Calcular(int hNormales, int hExtras)
{
 float horas_Normales = 1.75;
 float horas_Extras = 2.50;
 float salariototal;
 float salarioreal;

  salariototal = (hNormales * 1.75) + (hExtras * 2.50);
   
   if (salariototal <= 500){
       
       salarioreal = salariototal - (  20.25 * salariototal  );
                           }  
   else{
      salarioreal = salariototal - ( 10.25 * salariototal);
       } 

 cout << "Su salario normal es: " << salariototal << endl;
 cout << "Su salario con descuentos es: " << salarioreal << endl << endl; 
 return 0;
}