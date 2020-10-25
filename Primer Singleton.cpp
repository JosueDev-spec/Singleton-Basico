#include <iostream>
#include<sstream>
#include<string>
#include <cstdlib>


/*

	El patron singleton consiste en poner como privado el Constructor de la clase
	y entre sus atrubutos añadir un puntero de la misma clase que se esta creado  
	
	luego se crea un metodo publico getInstancia()que devuelve un puntero este metodo nos vas a permitir instanciar una vez
     si ya hay una instancia simplemente la devuelve


*/


using namespace std;

class Profesor{
private:
	string nombre;
	int edad;
	static Profesor* instancia;
	
	Profesor(string _nombre,int _edad){
			nombre = _nombre;
			edad = _edad;
		}
public:
	
	 Profesor* getInstancia(string nombre,int edad){
		if(instancia==NULL){
			instancia= new Profesor(nombre,edad);
		}
			return instancia;
	}
	string getNombre(){
		return nombre;
	}
	int getEdad(){
		return edad;
	}
	void setNombre(string _nombre){
		nombre=_nombre;
	}
	void setEdad(int _edad){
		edad=_edad;
	}
	const string toString(){
		stringstream f;
		f<<"Nombre : "<<nombre<<endl;
		f<<"Edad : "<<edad<<endl;
	
		return f.str();
	}
		
	 virtual ~Profesor(){
	 }
};
Profesor * Profesor::instancia=NULL;


int main(){
	Profesor * profe=profe->getInstancia("Josue",19);
	cout<<profe->toString();
	
		delete profe;
		
	return 0;
}

//Desarrollado por Josue Garcia Ortiz //25/10/2020