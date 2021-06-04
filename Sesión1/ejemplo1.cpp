#include <iostream>
using namespace std;


/*
Escriba un programa que solicite n números desde el teclado, y calcule: la
suma de todos los números ingresados y su promedio.

*/
int main(int argc, char const *argv[])
{   
    // pagado*1.13 pagaron = pagaron + loquesea

    int cantn;
    float suma=0, promedio=0, num;
    cout<<"Ingrese cantidad de numeros a ingresar"<<endl;
    cin>>cantn;

    for (int i = 0; i < cantn; i++) // i=2
    {
        cout<<"Ingrese un numero"<<endl;
        cin>>num;  // 6 9 3
        suma += num; // 15 + 3 = 18
    }
    
    promedio = suma/cantn;
    cout<<"La sumatoria de todos los numeros es "<<suma<<" y el promedio es "<<promedio<<endl;
    cout<<"La sumatoria de todos los numeros es "<<suma<<" y el promedio es "<<suma/cantn<<endl;

    return 0;
}
