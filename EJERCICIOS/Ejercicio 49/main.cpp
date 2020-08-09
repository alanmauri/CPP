#include <iostream>

using namespace std;

int numeroSecreto = 7;

void adivinarNumeroSecreto(int miNumero)
{
	if(miNumero == numeroSecreto)
	{
		cout<<"Adivinartes!";
	}
	else
	{
		cout<<"Intento fallido con: " <<  miNumero <<endl;
		
		int otroNumero;
		cout<<"Ingrese otro numero: ";
		cin>>otroNumero;
		adivinarNumeroSecreto(otroNumero);
		
	}
	
	
}

int main(int argc, char** argv) {
	
	adivinarNumeroSecreto(5);
	
	
	return 0;
}
