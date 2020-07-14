// Venta.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

void Datos(int cantidad);
void CostoArticulo(int cantidad);
void Mostrar(int cantidad);
float TotalPagar(int cantidad);

struct Productos
{
    char nombre[21];
    int cantidad;
    float precio;
    float Total;
}productos[26];

int main()
{
    int cantidad;
    cout << "Cantidad Maxima de Productos (25)" << endl;
    cout << "Ingrese la cantidad de productos: ";
    cin >> cantidad;
    cout << "";
    Datos(cantidad);
    cout << "-----------------------\n";
    cout << "TOTAL A PAGAR: $";
    cout << TotalPagar(cantidad) <<"\n";
    cout << "-----------------------\n";
}

void Datos(int cantidad)
{
    cout << "\n*** INGRESO DE DATOS ***\n" << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Producto " << i << ": " << endl;
        cout << "Nombre del Producto: ";
        cin >> productos[i].nombre;
        cout << "Cantidad de Productos: ";
        cin >> productos[i].cantidad;
        cout << "Precio del Producto: ";
        cin >> productos[i].precio;
        cout << endl;
    }
    CostoArticulo(cantidad);
    Mostrar(cantidad);
}

void CostoArticulo(int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        productos[i].Total = (productos[i].cantidad * productos[i].precio);
    }
}

void Mostrar(int cantidad)
{
    cout << "\n*** IMPRIMIR DATOS ***\n" << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Producto " << i << ": " << endl;
        cout << "Nombre del Producto: ";
        cout << productos[i].nombre << endl;
        cout << "Cantidad de Productos: ";
        cout << productos[i].cantidad << endl;
        cout << "Precio del Producto: ";
        cout << productos[i].precio << endl;
        cout << "Total: $";
        cout << productos[i].Total << endl;
        cout << endl;
    }
}

float TotalPagar(int cantidad)
{
    float TotalVenta = 0;
    for (int i = 0; i < cantidad; i++)
    {
        TotalVenta = (TotalVenta +productos[i].Total);
    }
    return TotalVenta;
}