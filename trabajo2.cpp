#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int op, n;
    float A[100], B[100], C[100];
    cout<<"Ingrese la cantidad de elementos de los vectores: ";cin>>n;
    do{
        system("cls");
        cout<<"MENU VECTORES";
        cout<<"================";
        cout<<"1. Llenar Vector A de manera aeratoria";
        cout<<"2. Llenar Vector B de manera aeratoria";
        cout<<"3. Realizar C = A + B";
        cout<<"4. Realizar c = C - B";
        cout<<"5. Mostrar los vectores A, B o C";
        cout<<"0. Salir";
        cout<<"Ingrese una opcion: ";cin>>op;
        switch(op){
            case 1:
            for(int i = 0; i < n; i++){
                A[i] = rand() % 201 - 100;
            }
            cout<<"Vector A llenado de manera aleatoria";
            cout<<" ";
            system("pause");
            break;
            case 2:
            for(int i = 0; i < n; i++){
                B[i] = rand() % 201 - 100;
            }
            cout<<"Vector B llenado de manera aleatoria";
            cout<<" ";
            system("pause");
            break;
            case 3:
            for(int i = 0; i < n; i++){
                C[i] = A[i] + B[i];
            }
            cout<<"Vector C = A + B";
            cout<<" ";
            system("pause");
            break;
            case 4:
            for(int i = 0; i < n; i++){
                C[i] = A[i] - B[i];
            }
            cout<<"Vector C = B - A";
            cout<<" ";
            system("pause");
            break;
            case 5:
            int vectorOption;
            cout<<"Ingrese el vector a mostrar (1: A, 2: B, 3: C): ";cin>>vectorOption;
            switch(vectorOption){
                case 1:
                cout<<"Vector A: ";
                for(int i = 0; i < n; i++){
                    cout<<A[i]<<" ";
                }
                cout<<endl;
                cout<<" ";
                system("pause");
                break;
                case 2:
                cout<<"Vector B: ";
                for(int i = 0; i < n; i++){
                    cout<<B[i]<<" ";
                }
                cout<<endl;
                cout<<" ";
                system("pause");
                break;
                case 3:
                cout<<"Vector C: ";
                for(int i = 0; i < n; i++){
                    cout<<C[i]<<" ";
                }
                cout<<endl;
                cout<<" ";
                system("pause");
                break;
                default:
                cout<<"Opcion no valida";
                cout<<" ";
                system("pause");
                break;
            }
            break;
            case 0:
            cout<<"saliendo del programa";
            cout<<" ";
            system("pause");
            break;
            default: 
            cout<<"Opcion no valida";
            cout<<" ";
            system("pause");
            break;
            while (op > 0 && op < 6);
        }
    }while(op > 0 && op < 6);
}