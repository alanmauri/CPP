  #include <iostream>
  #include <factura.h>

using namespace std;



void productos(int opcion)
{
    system("cls");
    int opcionProducto = 0;

    switch (opcion)
    {
        case 1:
        {
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "*****************" << endl;
            cout << "1 - Capuchino" << endl;
            cout << "2 - Expresso" << endl;
            cout << "3 - Te de Limon" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
                case 1:
                    agregarProducto("1 Capuchino - L.40.00", 1, 40);
                    break;
                case 2:
                    agregarProducto("1 Expresso - L.30.00", 1, 30);
                    break; 
                case 3:
                    agregarProducto("1 chocolate - L.15.00", 1, 15);
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
            cout << "BEBIDAS FRIAS" << endl;
            cout << "*************" << endl;
            cout << "1 - Jugos de frutas:" << endl;
            cout << "2 - Cerveza:" << endl;
            cout << "3 - Te frios :" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
                case 1:
                    agregarProducto("1 Gugos de frutas - L.20.00", 1, 20);
                    break;
                case 2:
                    agregarProducto("1 Cervezas - L.80.00", 1, 80);
                    break; 
                case 3:
                    agregarProducto("1 Te frios - L.25.00", 1, 25);
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

        case 3:
        {
            cout << "REPOSTERIA" << endl;
            cout << "**********" << endl;
            cout << "1 - Pasteles:" << endl;
            cout << "2 - Helados: " << endl;
            cout << "3 - flasnes: " << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionProducto;

            switch (opcionProducto)
            {
                case 1:
                    agregarProducto("1 Patel - L.150.00", 1, 150);
                    break;
                case 2:
                    agregarProducto("1 Helado - L.50.00", 1, 50);
                    break; 
                case 3:
                    agregarProducto("1 Flan - L.75", 1, 75);
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

        default:
            break;
    }
}
