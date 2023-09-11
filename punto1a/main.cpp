#include<iostream>
#include "CuentaObjeto.h"

using namespace std;

int main(){
	CuentaObjeto obj1;
	CuentaObjeto::mostrarResumen();
	
	
	{
		CuentaObjeto obj2(obj1);
		CuentaObjeto::mostrarResumen();
		CuentaObjeto *obj3 = new CuentaObjeto(); // reserva dinamica
		*obj3 = obj2.metodo(*obj3);
		CuentaObjeto::mostrarResumen();
		delete obj3; // borramos el objeto de la reserva dinamica
	}
	
	CuentaObjeto::mostrarResumen();
	return 0;
}
