#include "iostream"


using namespace std;

int main ()
{

 int Numsorpresa = 16, Num, contador = 0, salir= 110;

 cout << "Bienvenid@, este es un juego donde tienes que adivinar un numero" << endl << endl;
 cout << "tendras solo 5 oportunidades para adivinar" << endl << endl;
 cout << "Ingresar un numero del 1 al 100:" << endl;     
 cout << "si desea abandonar el juego digite: 1" << endl;
 do 
 {
   cin >> Num;
  
     if(Num>Numsorpresa){
        cout << "el numero es mayor" << endl;
       contador++;
       }
        else if(Num == Numsorpresa){ 
            
          cout << "felicidades lograste adivinar el numero" << endl;
          contador=5;
        }   
        else{    
              cout << "intenta de nuevo" << endl;         
              contador++;
            }     
  }while(contador<5 && Num != 1);  

 return 0;  
}