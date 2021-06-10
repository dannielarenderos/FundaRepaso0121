#include <iostream>
using namespace std;

void pasoValor(int num);
void pasoReferencia(int *num);

int main(void) {
    int num = 50;

    cout << "Antes de pasar por alguna funcion: " << num << endl;

    pasoValor(num);
    cout << "Despues de pasar por pasoValor: " << num << endl;

    pasoReferencia(&num);
    cout << "Despues de paso por referencia: " << num << endl;

    return 0;
}

void pasoValor(int num) {
    num = 20;
}

void pasoReferencia(int *num){
    (*num) = -30;
}