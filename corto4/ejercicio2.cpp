#include <iostream>

using namespace std;

void MediaEst(double [25]);
void Cantidad(double [25]);

int main()
{
    cout << "Ingrese la estatura de los estudiantes"<<endl;
    //array
    double estatura[25];
    //Almacenar elementos en matriz
    for (int i = 0; i < 25; i++)
    {
        cout << "Ingrese estatura del Alumno " << i << ": ";
        cin >> estatura[i];
    }
    cout << endl;

    cout << "Estatura de los Alumnos" << endl;
    //Mostrar matriz
    for (int i = 0; i < 25; i++)
    {
        cout << "Alumno " << i << ": " << estatura[i] << endl;
    }
    cout << endl;

    Cantidad(estatura);

    return 0;
}

double media;

void MediaEst(double valores[25])
{
    for (int i = 0; i < 25; i++)
    {
        media = media + valores[i];
    }
    media = media / 25;
    cout << "La media de las estaturas es: " << media << endl;
    cout << endl;
}

void Cantidad(double valores[25])
{
    MediaEst(valores);
    int arriba = 0;
    int abajo = 0;
    for (int i = 0; i < 25; i++)
    {
        if (valores[i] > media)
        {
            arriba++;
        }
        else
        {
            abajo++;
        }
    }
    cout << "Alumnos arriba de la media: " << arriba << endl;
    cout << "Alumnos abajo de la media: " << abajo << endl;
}



