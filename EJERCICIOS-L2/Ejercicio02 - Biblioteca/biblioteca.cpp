#include <iostream>
#include <algorithm>
#include <time.h>


using namespace std;

string libros[10][3];

void cargarLibros()
{
    libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes)"; libros[0][2] = "Alan Cornejo";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos"; libros[1][2] = " Steve Wozniak";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos"; libros[2][2] = "Ronald Wayne";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion"; libros[3][2] = "Stephen Hawking";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos"; libros[4][2] = "Edward War";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos"; libros[5][2] = "Steven Paul Jobs";
	libros[6][0] = "Base de Datos"; libros[6][1] = "Apuntes de Base de Datos 1"; libros[6][2] = "Bruce Eckel";
	libros[7][0] = "Base de Datos"; libros[7][1] = "Base de Datos (2005)"; libros[7][2] = "Thomas Cormen";
	libros[8][0] = "Base de Datos"; libros[8][1] = "Base de Datos (2011)"; libros[8][2] = "Bill Gates";
	libros[9][0] = "Base de Datos"; libros[9][1] = "Base de Datos Avanzadas (2013)"; libros[9][2] = "Mark Zukerberg";
    
}    

int main(int argc, char const *argv[])
{
    cargarLibros();

    srand(time(NULL));

    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << endl;
        cout << "Ingrese la descripcion libro o autor del libro que desea busca: ";
        cin >> buscar;
        cout << endl;
        
        
        //Busqueda

        for (int i = 0; i < 10; i++)
        {
            string libro = libros[i][1];
            string autor = libros[i][2];
            string libroEnminuscula = libro;
            string autorMinuscula = autor;
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(autorMinuscula.begin(), autorMinuscula.end(), autorMinuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
            
            if (libroEnminuscula.find(buscar) != string::npos || autorMinuscula.find(buscar) != string::npos)
            {   
                cout << "Libro encontrado: " << libro << endl; 
                cout << endl;
                cout << "Tambien te sugerimos estos libros: ";
                cout << endl;

                int sugerencia1 = rand() % 10 + 1;
                int sugerencia2 = rand() % 10 + 1;
                int sugerencia3 = rand() % 10 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;
              
                salir = true;
                break;
            }
        }
        if (salir == false)
        {
            char continuar = 'n';
            while (true)
            {
                system("cls");
                cout << "No se encontro el libro que busca, ni su autor. Desea continuar? s/n: ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S')
                {
                    break;
                }else if (continuar == 'n' || continuar == 'N')
                {
                    salir = true;
                    break;
                }
            }
        }
    }
    return 0;
}