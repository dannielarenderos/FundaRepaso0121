#include <iostream>
#include <string.h>

using namespace std;
int buscar(char matrix[][4], int n, int i, int j, string palabra)
{
    int i2 = i, j2 = j;
    int i3 = i, j3 = j;

    string newpalabraV = "", newpalabraD = "", newpalabraH = "";

    for (int k = 0; k < palabra.length(); k++)
    {
        if (n - j >= palabra.length())
        {
            newpalabraH += matrix[i][j2];
            j2++;
            cout << newpalabraH << ": " << j2 << endl;
        }

        if (n - i >= palabra.length())
        {
            newpalabraV += matrix[i2][j];
            i2++;
            cout << newpalabraV << ": " << i2 << endl;
        }
        if (n - j >= palabra.length() && n - i >= palabra.length())
        {
            newpalabraD += matrix[i3][j3];
            i3++, j3++;
            cout << newpalabraD << ": " << i3 << " " << j3 << endl;
        }
    }


    if (newpalabraH == palabra)
        return 1;
    else if (newpalabraV == palabra)
        return 2;
    else if (newpalabraD == palabra)
        return 3;
    else
        return 0;
}

bool recorrerM(char matriz[][4], int n, string palabra)
{
    int res;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matriz[i][j] == palabra.at(0))
            {
                res = buscar(matriz, n, i, j, palabra);
                if (res == 1)
                {
                    cout << i << " " << j << " "
                         << "h";
                    return true;
                }
                else if (res == 2)
                {
                    cout << i << " " << j << " "
                         << "v";
                    return true;
                }
                else if (res == 3)
                {
                    cout << i << " " << j << " "
                         << "d";
                    return true;
                }
            }
        }
    }
    cout << 0 << " " << 0 << " "
         << "n";
    return false;
}

int main(int argc, char const *argv[])
{
    char x[4][4] = {{'h', 'o', 'l', 'o'},
                     {'o', 'o', 'i', 'h'},
                     {'l', 'u', 'l', 'k'},
                     {'i', 'e', 'u', 'h'}};

    string pala = "oi";
    recorrerM(x, 4, pala);

    return 0;
}
