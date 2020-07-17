#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a=5, b=2;
	
	while(a>b){
		cout<<"Ingrese el valor de A:"<<endl;
		cin>>a;
	}
	
	cout<<endl;
	cout <<"salistes del ciclo.";
	return 0;
}
