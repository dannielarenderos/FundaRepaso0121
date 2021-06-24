/*
Elabore, en la función main, un menú cíclico que administrará un arreglo. El arreglo 
debe ser declarado como una variable local dentro de esta función, al igual que una 
variable entera en la que se indicará cuantos elementos están guardados en el arreglo. 
A este menú debe ir incorporando cada una de las opciones que se describen en los 
siguientes ejercicios de esta guía.

Escriba una función que llene un arreglo con números enteros. Debe recibir como 
parámetros el arreglo y una variable que contendrá la cantidad de valores que se desea 
introducir en él. Los datos que se almacenarán en el arreglo se proporcionarán desde 
teclado. Esta función corresponde a la primera opción del menú.

Escriba una función que llene un arreglo con números enteros aleatorios. Debe recibir 
como parámetros el arreglo y la cantidad de valores que se desea introducir en él. Los 
datos que se almacenarán en el arreglo serán números aleatorios generados dentro de 
un rango de valores. Esta función le pedirá al usuario los extremos de ese rango y luego 
procederá a llenar el arreglo. Esta función corresponde a la segunda opción del menú.

Escriba una función que calcule y retorne la suma de los números enteros contenidos en
un arreglo. Debe recibir como parámetros el arreglo y la cantidad de valores que 
contiene. Esta función corresponde a la tercera opción del menú

Escriba una función que calcule y retorne el promedio de los números enteros 
contenidos en un arreglo. Debe recibir como parámetros el arreglo y la cantidad de 
valores que contiene. Para realizar la suma de los números del arreglo, utilice la función 
del ejercicio anterior. Esta función corresponde a la cuarta opción del menú.

Escriba una función que realice el conteo de la cantidad de números positivos, la 
cantidad de números negativos y la cantidad de ceros contenidos en un arreglo de 
enteros. Debe recibir como parámetros el arreglo, la cantidad de valores que contiene, 
el contador de números positivos, el contador de números negativos y el contador de 
ceros. Esta función corresponde a la quinta opción del menú.

Escriba una función que reciba como parámetros un arreglo y la cantidad de valores que 
contiene. Luego recorre el arreglo para realizar las siguientes sustituciones: cambiar 
cada número par por 2, cambiar cada número impar por 1, cambiar cada número 
negativo por 0. Esta función corresponde a la sexta opción del menú
*/

#include <iostream>
#include <ctime>
using namespace std;

void menuPrincipal();
void llenarArreglo(int arreglo[], int *num);
void mostrarArreglo(int arreglo[], int num);
void llenarArregloAleatorio(int arreglo[], int *num);
int suma(int arreglo[], int num);
float promedio(int arreglo[], int num);
void contador(int arreglo[], int num, int *positivos, int *negativos, int *ceros);
void sustituciones(int arreglo[], int num);

int main(void) {
    int opcion = 0, cantidad = 0, positivos = 0, negativos = 0, ceros = 0;
    int arreglo[20];

    srand(time(NULL));
    
    do {
        menuPrincipal();
        cin >> opcion;

        switch(opcion) {
            case 1:
                llenarArreglo(arreglo, &cantidad);
                mostrarArreglo(arreglo, cantidad);
                break;
            case 2:
                llenarArregloAleatorio(arreglo, &cantidad);
                mostrarArreglo(arreglo, cantidad);
                break;
            case 3:
                cout << "\nLa suma es: " << suma(arreglo, cantidad) << endl;
                break;
            case 4:
                cout << "\nEl promedio es: " << promedio(arreglo, cantidad) << endl;
                break;
            case 5:
                contador(arreglo, cantidad, &positivos, &negativos, &ceros);
                cout << "Positivos: " << positivos << endl;
                cout << "Negativos: " << negativos << endl;
                cout << "Ceros: " << ceros << endl; 
                break;
            case 6:
                sustituciones(arreglo, cantidad);
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default: 
                cout << "Opcion invalida" << endl;
        }
    } while(opcion != 0);

    return 0;
}

void menuPrincipal() {
    cout << "\n\tMENU PRINCIPAL" << endl;
    cout << "1. Llenar arreglo de enteros" << endl;
    cout << "2. Llenado aleatorio" << endl;
    cout << "3. Sumar" << endl;
    cout << "4. Promedio" << endl;
    cout << "5. Contador" << endl;
    cout << "6. Sustituciones" << endl;
    cout << "Su opcion: ";
}

void llenarArreglo(int arreglo[], int *num) {
    cout << "\nCantidad de num a ingresar: "; cin >> *num;

    if(*num > 20)
        cout << "No puede ingresar num mayor a 20" << endl;
    else {
        for(int i = 0; i < *num; i++) {
            cout << "Num: "; cin >> arreglo[i];
        }
    }
}

void llenarArregloAleatorio(int arreglo[], int *num) {
    int limiteInferior = 0, limiteSuperior = 0;

    cout << "\nCantidad de num a ingresar: "; cin >> *num;
    cout << "Digite limites" << endl;
    cin >> limiteInferior >> limiteSuperior;

    if(*num > 20)
        cout << "No puede ingresar num mayor a 20" << endl;
    else {
        for(int i = 0; i < *num; i++) {
            // variable = limite inferior + random() % (limite superior + 1 - limite inferior)
            arreglo[i] = limiteInferior + rand() % (limiteSuperior + 1 - limiteInferior);
        }
    }
}

int suma(int arreglo[], int num) {
    int suma = 0;

    for(int i = 0; i < num; i++) {
        suma += arreglo[i];
    }

    /*
    1 2 3
    for(int i = 0; i < 3; i++) {
        suma += arreglo[0];
        suma += 1
        suma = 1;
    }

    for(int i = 1; i < 3; i++) {
    suma += arreglo[1];
    suma = 1 + 2
    suma = 3;
    }

    for(int i = 2; i < 3; i++) {
        suma += arreglo[2];
        suma = 3 + 3
        suma = 6;
    }

    */

    return suma;
}

float promedio(int arreglo[], int num) {
    return suma(arreglo, num) / (float) num;
}

void contador(int arreglo[], int num, int *positivos, int *negativos, int *ceros) {
    for(int i = 0; i < num; i++){
        if(arreglo[i] > 0)
            (*positivos)++;
        else if(arreglo[i] < 0)
            (*negativos)++;
        else
            (*ceros)++;   
    }
}

void sustituciones(int arreglo[], int num) {
    mostrarArreglo(arreglo, num);

    for(int i = 0; i < num; i++) {
        if(arreglo[i] < 0)
            arreglo[i] = 0;
        else if(arreglo[i] % 2 == 0)
            arreglo[i] = 2;
        else
            arreglo[i] = 1;
    }

    mostrarArreglo(arreglo, num);
}

void mostrarArreglo(int arreglo[], int num) {
    for(int i = 0; i < num; i++) {
        cout << arreglo[i] << " ";
    }

    cout << endl;
}