#include <iostream>
using namespace std;
/*
Dados dos enteros a y b, que son los límites de un intervalo, muestre todos los
enteros en ese intervalo que son números pares.
*/

int main(int argc, char const *argv[])
{
    int a, b;
    cout<<"Ingrese el limite inferior"<<endl;
    cin>>a;
    cout<<"Ingrese el limite superior"<<endl;
    cin>>b;

    for (int i = a; i <= b; i++) // a a+1 a+1+1     b  3-7  4
    {
        if(i%2==0){
            cout<<i<<endl;
        }

    }
    
    return 0;
}
