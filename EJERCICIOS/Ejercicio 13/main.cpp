#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	double subtotal = 0, total=0, impuesto=0.15, calculodescuento, calculoimpuesto;
	int descuento=0;
	char exenta;
	
	
	cout << "Ingrese el subtotal:";
	cin >> subtotal;
	
	cout << "Ingrese un descuento ( 0,5,10,15,20):";
	cin >> descuento;
	
	cout<<"La factura exenta?:  S=si  o  N=no ";
	cin>> exenta;
	
	
	calculodescuento=(subtotal*descuento)/100;
	calculoimpuesto=(subtotal-calculodescuento)*impuesto;
	
	
	if(exenta=='s' || exenta=='S'){
		
	total = subtotal-calculodescuento;
	cout << "Total a pagar es :" << total;
	}
	
	if(exenta=='n'||exenta=='N') {
		total = subtotal-calculodescuento+calculoimpuesto;
	cout << "Total a pagar es :" << total;
	}
	
	
	
	

	
	cout<< endl;
	
	
	return 0;
}
