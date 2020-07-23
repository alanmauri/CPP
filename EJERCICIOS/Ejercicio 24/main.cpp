#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int pares=0;
	
	for(int i=1; i<=10; i++)
	{
		if(i % 2==0)
		{
			pares=pares+i;
		}
		
		cout<<i<<"  ";
	}
	
	cout<<endl;
	cout<<endl;
	
	cout<<"El total de la suma de todos los pares es: "<< pares	;
	
	return 0;
}
