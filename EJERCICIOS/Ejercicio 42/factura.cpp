#include <iostream>

using namespace std;

double subtotal;

string listaProducto;

void agregarProducto(string descripcion, int cantidad, double precio)

{
	listaProducto = listaProducto + descripcion + '\n';
	
		subtotal= subtotal(cantidad * precio);
}
