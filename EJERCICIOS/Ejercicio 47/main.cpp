#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[]){

	
	int numero=0;


	//inicializar el numero random.
	srand(time(NULL));                          
	
	                        

	for (int i=0; i<=20; i++)
	{
	
		//genera un numero entre 10 y 1.
		numero= rand() % 10 + 1;
		
		cout<<"Pirmer numero al azar  " << numero <<endl;
		
	}


	
	return 0;
}
