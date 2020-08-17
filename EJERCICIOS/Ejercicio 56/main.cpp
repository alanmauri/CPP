#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{   

    int numeros [5][5], total = 0;
   

    srand(time(NULL)); 

    
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            numeros[i][j] = {rand() % 10 + 1};

            total = total + numeros[i][j];
        }
    }

    
    cout << "Arreglo bidimencional de 5x5: " << endl;
    cout<< endl; 
    
    cout << "Valores contenidos en el arreglo al azar: " << endl;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << numeros[i][j] << " ";
        }

        cout << endl;
    }
    
    cout << endl;
    cout << "================================================: ";
    cout << endl;
    
    cout << "El total de la suma de los valores contenidos es: " << total;
    return 0;
}
