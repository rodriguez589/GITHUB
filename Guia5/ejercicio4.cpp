#include <iostream>
#include <stdio.h>
#include "cmath"

using namespace std;

int fecha(int dia, int mes, int edad)
{
  int edad_bisiesto;
  edad_bisiesto=(edad% 4 == 0 && edad % 100 != 0) || (edad % 400 == 0);
  if(mes>=1 &&mes<=12)
  {
  switch(mes)
   {
     
     
      case 1: 
      if (dia >=1 && dia<=30)
       {
         dia++;
        }
         else if(dia==31)
        {
         dia=1;
         mes++;
        }
        if(dia>=1 && dia<=31 && mes >=1 && mes<=12)
        {
                 cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl; 
        }
        else 
        {
                 cout <<"La fecha ingresada es incorrecta"<<endl;
        }
              
        break;
        case 3: 
       if (dia >=1 && dia<=30)
       {
         dia++;
       }
       else if(dia==31)
       {
         dia=1;
         mes++;
       }
       if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
                 cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
       }
       else 
       {
                 cout <<"La fecha ingresada es incorrecta"<<endl;
       }
    
       break;
       case 5: 
       if (dia >=1 && dia<=30)
       {
         dia++;
       }
       else if(dia==31)
       {
         dia=1;
         mes++;
       }
        if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
                cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
       }
       else 
       {
                cout <<"La fecha ingresada es incorrecta"<<endl;
       }
     
       break;
       case 7: 
       if (dia >=1 && dia<=30)
       {
         dia++;
       }
       else if(dia==31)
       {
         dia=1;
         mes++;
       }
        if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
                cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
       }
       else 
       {
                cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
       case 8: 
       if (dia >=1 && dia<=30)
       {
         dia++;
       }
       else if(dia==31)
       {
          dia=1;
         mes++;
       }
        if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
                cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
       }
       else 
       {
                cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
      
        case 10: 
       if (dia >=1 && dia<=30)
       {
         dia++;
       }
       else if(dia==31)
       {
         dia=1;
         mes++;
       }
        if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
                cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
       }
       else 
       {
                cout <<"La fecha ingresada es incorrecta"<<endl;
       }
       break;
        case 12: 
        if (dia >=1 && dia<=30)
       {
         dia++;
        }
        else if(dia==31)
        {
          dia=1;
         mes=1;
        }
         if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
                cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
       }
       else 
       {
               cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
        case 4:
        if (dia >=1 && dia<=29)
       {
         dia++;
        }
        else if(dia==30)
        {
          dia=1;
         mes++;
        }
         if(dia>=1 && dia<=30 && mes>= 1 && mes <=12)
       {
               cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
       }
       else 
       {
               cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
        case 6:
        if (dia >=1 && dia<=29)
        {
         dia++;
        }
        else if(dia==30)
        {
          dia=1;
         mes++;
        }
         if(dia>=1 && dia<=30 && mes>= 1 && mes <=12)
       {
               cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
       }
       else 
       {  
               cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
        case 9:
         if (dia >=1 && dia<=29)
       {
         dia++;
        }
        else if(dia==30)
        {
          dia=1;
         mes++;
        }
         if(dia>=1 && dia<=30 && mes>= 1 && mes <=12)
       {
               cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
       }
       else 
       {
               cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
        case 11:
         if (dia >=1 && dia<=29)
       {
         dia++;
        }
        else if(dia==30)
        {
          dia=1;
         mes++;
        }
         if(dia>=1 && dia<=30 && mes>= 1 && mes <=12)
       {
               cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
       }
       else 
       {
               cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
        case 2:
        if(edad_bisiesto)
        {
          if(dia>=1 && dia<=28)
          {
            dia++;
          }
          else if(dia==29)
          {
            dia=1;
            mes++;
          }
          if (dia>=1 && dia<=29 && mes>= 1 && mes <=12)
          {
                cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
          }
          else
          {
                cout <<"La fecha ingresada es incorrecta"<< endl;
          }
          
          
        }
        else 
        {
          if(dia>=1&& dia<=27)
          {
            dia++;
          }
          else if(dia==28)
          {
            dia=1;
            mes++;

          }
          if (dia>=1 &&dia<=28 &&mes>=1 &&mes<=12)
          {
                cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<edad<< endl;
          }
          else
          {
                cout <<"La fecha ingresada es incorrecta"<< endl;
          }
        }      
    }  
  }
  else
  {
    cout <<"La fecha proporcionada contiene un mes inexistente"<<endl;
  }
   
}

int main(void)
{
  int dia, mes, edad;
  
  cout << "Bienvenid@" << endl << endl;

  cout << "ingresar porfavor su dia" << endl ;
  cin >>dia;
  cout << "Ingresar porfavor su mes" << endl;
  cin >>mes;
  cout << "por ultimo ingresar el a"<<(char)164<<"o" << endl;
  cin >> edad;

  fecha(dia,mes,edad);

  return 0;
}