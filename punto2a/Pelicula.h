#include<iostream>
#include<string.h>

using namespace std;

enum tipoPelicula {
	N,I
};

class Pelicula {
	// Private section
	private:
		static int autonumerico;
		int codigo;
		string titulo;
		string director;
		bool estreno;
		float precioBase;
		tipoPelicula tipo;
		
	public:
		// Public Declarations
		Pelicula();
		Pelicula(string titulo, string director, bool estreno, float precioBase, tipoPelicula tipo);
		Pelicula(Pelicula& pc);
		void listarInformacion();
		float calcularCosto();
		~Pelicula();
	protected:
		// Protected Declarations
};

int Pelicula::autonumerico = 0;

Pelicula::Pelicula(){
	this->codigo = 000;
}

Pelicula::Pelicula(string titulo, string director, bool estreno, float precioBase, tipoPelicula tipo){
	codigo = ++autonumerico;
    this -> titulo = titulo;
    this -> director = director;
    this -> estreno = estreno;
    this -> precioBase = precioBase;
    this -> tipo = tipo;
}

Pelicula::Pelicula(Pelicula& pc){
	autonumerico++;
}

void Pelicula:: listarInformacion(){//codigo, string titulo, string director, bool estreno, float precioBase, tipoPelicula tipo
	cout << "#" << autonumerico << ", COD: " << this->codigo << ", TITULO: " << this->titulo << endl;
}

float Pelicula::calcularCosto(){
	float costo = this->precioBase;
	if(this->tipo == I){
		costo = costo*1.3;
	}else{
		if(this->estreno == false){
			costo = costo *0.8;
		}
	}	
	return costo;
}

Pelicula::~Pelicula(){
	autonumerico --;
}


