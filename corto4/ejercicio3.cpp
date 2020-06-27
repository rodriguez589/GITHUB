#include <iostream>

using namespace std;

void LlenarMatriz();
void CalcularN();
int Alumnos[25][5];

int main()
{
    LlenarMatriz();
    return 0;
}

int filas;

void LlenarMatriz()
{
    cout << "Ingrese el numero de Alumnos: ";
    cin >> filas;
    cout << endl;
    for (int i = 0; i < filas; i++)
    {
        cout << "Alumno " << i << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "Ingrese la nota " << j <<": ";
            cin >> Alumnos[i][j];
        }
        cout << endl;
    }
    CalcularN();
}

void CalcularN()
{
    double TotalN = 0, Promedio = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            TotalN = TotalN + Alumnos[i][j];
        }
        Promedio = (TotalN * 0.20);
        if (Promedio >= 6)
        {
            cout << "Alumno " << i << " Aprobaste con Promedio Final de: " << Promedio << endl;
            TotalN = 0, Promedio = 0;
        }
        else
        {
            cout << "Alumno " << i << " Reprobaste con Promedio Final de: " << Promedio << endl;
            TotalN = 0, Promedio = 0;
        }  
    }
}

 

