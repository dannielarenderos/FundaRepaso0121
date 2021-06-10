#include <iostream>
using namespace std;

int sumaValor(int a, int b);
void sumaReferencia(int a, int b, int *resultado);

int main(void) {
    int resultado = 0;

    cout << "Resultado sin haber pasado por ninguna funcion " << resultado << endl;

    cout << sumaValor(4, 5) << endl;
    cout << "Resultado despues de usar la funcion sumaValor " << resultado << endl;

    sumaReferencia(4, 5, &resultado);
    cout << "Resultado despues de suma referencia " << resultado << endl;

    if(resultado % 2 == 0) 
        cout << "Es par" << endl;
    else
        cout << "Es impar" << endl;

    return 0;
}

int sumaValor(int a, int b) {
    return a + b;
}

void sumaReferencia(int a, int b, int *resultado) {
    (*resultado) = a + b;
}
