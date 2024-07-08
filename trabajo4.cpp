#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void generarNumerosAleatorios(int *numeros, int n, int min, int max);
void calcularFrecuencias(int *numeros, int n, int *frecuencias, int rango);
void imprimirFrecuencias(int *frecuencias, int rango);

int main()
{
    int numeros[100];
    int n;
    cout<<"Ingrese la cantidad de numeros aleatorios a generar: ";cin>>n;
    generarNumerosAleatorios(numeros, n, 1, 15);

    cout<<"Numeros generados: ";
    for(int i = 0; i < n; i++)
    {
        cout<<numeros[i]<<" ";
    }
    cout<<endl;

    int rango = 15;
    int frecuencias[100];
    calcularFrecuencias(numeros, n, frecuencias, rango);

    imprimirFrecuencias(frecuencias, rango);

    return 0;
}

void generarNumerosAleatorios(int *numeros, int n, int min, int max)
{
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
        numeros[i] = min + rand() % (max - min + 1);
    }
}

void calcularFrecuencias(int *numeros, int n, int *frecuencias, int rango)
{
    for(int i = 0; i < rango; i++)
    {
        frecuencias[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        frecuencias[numeros[i] - 1]++;
    }
}

void imprimirFrecuencias(int *frecuencias, int rango)
{
    cout<<"                 ";
    for(int i = 0; i < rango; i++)
    {
        if (frecuencias[i] != 0)
        {
            cout<<(i + 1)<<" "<<frecuencias[i];
        }
    }
}