/* 
Traducir alguna frase al idioma p
Ejemplo:E s o   ya lo sabia
        _ _ _ _ _ 
Resultado:  Epesopo yapa lopo sapabipiapa
*/

#include <iostream>
#include <string>
using namespace std;

string idiomaP(string cadena);

int main(void) {
    string frase = "";

    cout << "Digite una frase: "; getline(cin, frase);

    cout << idiomaP(frase) << endl;

    return 0;
}

string idiomaP(string cadena) {
    string fraseTraducita = "";

    for(int i = 0; i < cadena.length(); i++) {
        switch(cadena[i]) {
            case 'a':
                fraseTraducita += "apa";
                break;
            case 'e':
                fraseTraducita += "epe";
                break;
            case 'i':
                fraseTraducita += "ipi";
                break;
            case 'o':
                fraseTraducita += "opo";
                break;
            case 'u':
                fraseTraducita += "upu";
                break;
            default:
                fraseTraducita += cadena[i];
        }
    }

    return fraseTraducita;
}