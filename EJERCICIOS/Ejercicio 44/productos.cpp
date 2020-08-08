#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");
    int opcionProducto = 0;

    switch (opcion)
    {
        case 1:
        {
            cout << "Bebidas caliente" << endl;
            cout << "*****************" << endl;
            cout << "1 - Capuchino" << endl;
            cout << "2 - Expresso" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
                case 1:
                    agregarProducto("1 Capucchino - L.40.00", 1, 40);
                    break;
                case 2:
                    agregarProducto("1 Expresso - L.30.00", 1, 30);
                    break; 
                default:
                {
                    cout << "Opcion no valida";
                    return;
                    break;
                }
            }
            
            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");

            break;
        }
        
        case 2:
        {
            system("cls");
            cout << "Bebidas frias" << endl;
            cout << "*************" << endl;
            system("pause");
            break;
        }

        case 3:
        {
            system("cls");
            cout << "Respostera" << endl;
            cout << "**********" << endl;
            system("pause");
            break;
        }
        
        default:
            break;
    }
}
