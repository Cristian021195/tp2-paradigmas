#ifndef CUENTAOBJETO_H
#define CUENTAOBJETO_H

#include <iostream>
#include <stdlib.h>

using namespace std;

class CuentaObjeto{
	private:
		static int creados;
		static int destruidos;
	public:
		CuentaObjeto();
		CuentaObjeto( CuentaObjeto& co );
		CuentaObjeto metodo( CuentaObjeto co );
		static void mostrarResumen();
		~CuentaObjeto();
	//protected:
		// Protected Declarations
};

int CuentaObjeto::creados = 0;
int CuentaObjeto::destruidos = 0;

CuentaObjeto::CuentaObjeto(){
	cout << "dir_mem: " << this << " ";
	creados++;
}

CuentaObjeto::CuentaObjeto(CuentaObjeto& co){
	cout << "dir_mem: " << this << " ";
	creados++;
}

CuentaObjeto CuentaObjeto::metodo(CuentaObjeto co){//implicitamente crea un nuevo objeto al recibir por parametro la copia
	return co;//crea otro al retornarlo
}

CuentaObjeto::~CuentaObjeto(){
	destruidos++;
}

void CuentaObjeto::mostrarResumen(){
	cout << "CREADOS: "<< creados <<" | DESTRUIDOS: "<< destruidos << " \n";
}

#endif
