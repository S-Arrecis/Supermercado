#include <iostream>
using namespace std;

class Persona{

    private : string nombres,apellidos,telefono,fecha_ingreso;

    private : char genero;

    public : Persona(){

    }

    public : Persona(string _nombres,string _apellidos,string _telefono,string _fecha_ingreso,char _genero){

        nombres = _nombres;
        apellidos = _apellidos;
        telefono = _telefono;
        fecha_ingreso =  _fecha_ingreso;
        genero = _genero;
    }
    


};