#include "iostream"

using namespace std;

int horas (int hora, int minuto, int segundo)
{
  segundo = segundo + 1;
if (segundo >= 60)
{
 segundo = 0;
 minuto = minuto + 1;
   if (minuto >= 60)
  {
     minuto = 0;
     hora = hora + 1;
     if (hora >= 24)
     {
       hora = 0;
     }
   }
}
    cout << "La hora que ingreso y sumada es:" << endl;

if (hora<10)
{
 cout << "0" << hora;
}
else 
{
 cout<<hora;
}

    cout << ":";

if (minuto<10)
{
 cout << "0" << minuto;
}
else
{ 
 cout << minuto;
}

   cout << ":";

if (segundo<10)
{
   cout << "0" << segundo;
}
else
{
   cout << segundo;
}
}

int main()
{
  
  int hora, minuto, segundo;


 cout << "Bienvenid@, esto es un reloj digital donde mostrara se sumara un segundo 00:00:00" << endl << endl;

 cout << "porfavor ingresar dos digitos de sus horas: 00" << endl;
 cin >> hora;

 cout << "porfavor ingresar dos digitos de sus minutos: 00" << endl;
 cin >> minuto;

 cout << "porfavor ingresar dos digitos de sus segundos: 00" << endl;
 cin >> segundo;

 horas( hora, minuto, segundo);

 return 0; 
}