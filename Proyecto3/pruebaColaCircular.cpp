#include <iostream>
#include <iostream>
#include "ColaCircular.hpp"

using namespace std;

int main()
{
	int dato;
	ColaCircular cc = ColaCircular();
	cc.insertar(1);
	cc.insertar(2);
	cc.insertar(3);
	dato=cc.quitar();
	cout<<"Dato sacado de la cola"<<dato<<endl;
	cc.insertar(4);
	dato=cc.quitar();
	cout<<"Dato sacado de la cola"<<dato<<endl;
	return 0;
}
