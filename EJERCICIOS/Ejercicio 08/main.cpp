#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	double subtotal = 0, total=0, impuesto=0.15, calculodescuento, calculoimpuesto;
	int descuento=0;
	
	
	cout << "Ingrese el subtotal:";
	cin >> subtotal;
	
	cout << "Ingrese un descuento ( o,5,10,15,20):";
	cin >> descuento;
	
	calculodescuento=(subtotal*descuento)/100;
	calculoimpuesto=(subtotal-calculodescuento)*impuesto;
	
	total = subtotal-calculodescuento+calculoimpuesto;
	
	cout<< endl;
	
	cout << "Total a pagar es :" << total;
	return 0;
}
