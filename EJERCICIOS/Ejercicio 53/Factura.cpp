#include <iostream>

using namespace std;

double subtotal, impuesto=0,total=0;
string listaProductos;

void agregarProducto(string descripcion, int cantidad, double precio)
{
    listaProductos =listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Detalle de Productos: " << endl;
    
    cout << listaProductos;

    impuesto= subtotal*0.15;
    total=subtotal+impuesto;

    cout << endl;
    cout << "-----------------------------------" << endl;
    cout << "Subtotal=====: L." << subtotal << endl;
    cout << "ISV 15%:=====: L." << impuesto << endl;
    cout << "================================" << endl;
    cout << "Total a Pagar: L." << total << endl;
    cout << endl;
    cout << endl;
    system("pause");
}
