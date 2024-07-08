#include<iostream>
using namespace std;

int main(){
    float ventas[12];
    for(int i = 0; i < 12; i++){
        cout<<"Ingrese las ventas del mes de: ";
        switch(i){
            case 0:
            cout<<"Enero: ";
            break;
            case 1:
            cout<<"Febrero: ";
            break;
            case 2:
            cout<<"Marzo: ";
            break;
            case 3:
            cout<<"Abril: ";
            break;
            case 4:
            cout<<"Mayo: ";
            break;
            case 5:
            cout<<"junio: ";
            break;
            case 6:
            cout<<"Julio: ";
            break;
            case 7:
            cout<<"Agosto: ";
            break;
            case 8:
            cout<<"Septiembre: ";
            break;
            case 9:
            cout<<"Octubre: ";
            break;
            case 10:
            cout<<"Noviembre: ";
            break;
            case 11:
            cout<<"Diciembre: ";
            break;
            default:
            break;
        }
        cin>>ventas[i];
    }
    float promedio = 0;
    for(int i = 0; i < 12; i++){
        promedio += ventas[i];
    }
    promedio /= 12;
    cout<<"Valor de la venta mensual promedio: "<<promedio<<endl;
    cout<<"Porcentaje de los meses que cumplieron los niveles de venta: ";
    int contador1 = 0;
    int contador2 = 0;
    int contador3 = 0;
    for(int i = 0; i < 12; i++){
        if(ventas[i] < 0.4 * promedio){
            contador1++;
        }else if(ventas[i] >= 0.4 * promedio && ventas[i] < 0.75 * promedio){
            contador2++;
        }
        else{
            contador3++;
        }
    }
    cout<<"- Minimo (Menos del 40% del promedio anual): "<<contador1 * 100 / 12 <<"%";
    cout<<"- Regular (Entre el 40% y el 75% del promedio anual): "<<contador2 * 100 / 12 <<"%";
    cout<<"- Excelente (Mas de 75% del promedio anual): "<<contador3 * 100 / 12 <<"%";
    for(int i = 0; i < 12; i++){
        if (ventas[i] >= 0.75 * promedio){
            switch(i){
                case 0:
                cout<<"- Enero (" <<ventas[i] << ")";
                break;
                case 1:
                cout<<"- Febrero (" <<ventas[i] << ")";
                break;
                case 2:
                cout<<"- Marzo (" <<ventas[i] << ")";
                break;
                case 3:
                cout<<"- Abril (" << ventas[i] << ")";
                break;
                case 4:
                cout<<"- Mayo (" << ventas[i] << ")";
                break;
                case 5: 
                cout<<"- Junio (" << ventas[i] << ")";
                break;
                case 6:
                cout<<"- Julio (" << ventas[i] << ")";
                break;
                case 7:
                cout<<"- Agosto (" << ventas[i] << ")";
                break;
                case 8:
                cout<<"- Septiembre (" << ventas[i] << ")";
                break;
                case 9:
                cout<<"- Octubre (" << ventas[i] << ")";
                break;
                case 10:
                cout<<"- Noviembre (" << ventas[i] << ")";
                break;
                case 11:
                cout<<"- Diciembre (" << ventas[i] << ")";
                break;
                default:
                break;
            }
        }
    }
}
