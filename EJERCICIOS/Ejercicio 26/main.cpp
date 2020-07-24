#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	for (int i=1; i<=10; i++ )
	{
		cout<<"Indice: " << i;
		cout<<endl;
	}
	
	cout<<endl;
	cout<<endl;
	
	int i=1;
	
	while(i<=10)
	{
		cout<< "Indice: " << i;
		cout<<endl;
		i++;
	}
	
	
	return 0;
}
