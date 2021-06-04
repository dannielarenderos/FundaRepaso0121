#include <iostream>
using namespace std;
/*
Solicite carácteres desde teclado, hasta que el usuario ya no quiera seguir
proporcionándolos. Deberá indicar la cantidad de vocales que se hayan digitado.
*/

int main(int argc, char const *argv[])
{
    char car;
    int contvocal=0, cantnovocal=0;
    
    cout<<"Ingrese un caracter, x si desea terminar"<<endl;
    cin>>car;
    while (car != 'x')
    {
        if(car == 'a' ||car == 'A' || car == 'E' || car == 'e' ){
            contvocal++;
        }
        else {
            cantnovocal++;
        }
        cout<<"Ingrese un caracter, x si desea terminar"<<endl;
        cin>>car;
    }
    
    cout<<"La cantidad de vocales ingresas es "<<contvocal<<endl;
    cout<<"La cantidad de no vocales ingresas es "<<cantnovocal;

    return 0;
}
