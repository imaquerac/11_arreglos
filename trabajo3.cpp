#include <iostream>
#include <cmath>
using namespace std;

float calcularPromedio(int *numeros, int n);
float calcularDesviacionTipica(int *numeros, int n);

int main()
{
    int numeros[100];
    int n;
    cout<<"Ingrese la cantidad de numeros a ingresar: ";cin>>n;
    for(int i = 0; i < n; i++)
    {
        int num;
        do
        {
            cout<<"Ingrese un numero entero positivo: ";cin>>num;
            if(num <= 0)
            {
                cout<<"El numero ingresado no es positivo. Intente de nuevo.";
            }
        } while(num <= 0);
        numeros[i] = num;
    }
    float promedio = calcularPromedio(numeros, n);
    float desviacionTipica = calcularDesviacionTipica(numeros, n);
    cout<<"Promedio general de la serie ingresada: "<<promedio;
    cout<<"Desviacion tipica de la serie ingresada: "<<desviacionTipica;
    return 0;
}

float calcularPromedio(int *numeros, int n)
{
    float suma = 0;
    for(int i = 0; i < n; i++)
    {
        suma += numeros[i];
    }
    return suma / n;
}

float calcularDesviacionTipica(int *numeros, int n)
{
    float promedio = calcularPromedio(numeros, n);
    float suma = 0;
    for(int i = 0; i < n; i++)
    {
        suma += pow(numeros[i] - promedio, 2);
    }
    return sqrt(suma / n);
}