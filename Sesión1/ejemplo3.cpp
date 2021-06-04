#include <iostream>
using namespace std;


/*
Escriba un programa que solicite números desde el teclado hasta que presione
el número 0 y calcule: la suma de todos los números ingresados, la cantidad de
números ingresados y su promedio.


*/

int main(int argc, char const *argv[])
{
    int num;
    int cantnum=0;
    float suma=0, promedio=0;

    cout<<"Ingrese un numero, 0 si necesita parar"<<endl;
    cin>>num;  // 0
        
    while (num != 0)  // 0 != 0 
    {
        suma += num; // 6 + 3 = 9
        cantnum++;  // 1 + 1=2
        cout<<"Ingrese un numero, 0 si necesita parar"<<endl;
        cin>>num; // 0

    }

    promedio = suma/cantnum;
    cout<<"La sumatoria de todos los numeros es "<<suma<<" y el promedio es "<<promedio<<endl;
    cout<<"La sumatoria de todos los numeros es "<<suma<<" y el promedio es "<<suma/cantnum<<endl;


    return 0;
}
