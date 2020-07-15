#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a=50, b=10, c=7;
	
	
	if(a>b && a>c)
	{
		cout<<"A es el mayor  "<< a;
	}
	else if (b>a && b>c)
	{
		cout<<"B es el mayor  "<< b;
	}
	else
	 {
		cout<<"C es el mayor  " << c;
	}
	return 0;
}
