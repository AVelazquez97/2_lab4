#include "../headers/DTHuesped.h"

DTHuesped::DTHuesped(){

}

DTHuesped::DTHuesped(string nombre, string email, string contrasena, bool es_tecno){
    this -> nombre = nombre;
    this -> email = email;
    this -> contrasena = contrasena;
    this -> es_tecno = es_tecno;
}

string DTHuesped::get_nombre(){
    return this -> nombre;
}

string DTHuesped::get_email(){
    return this -> email;
}
    
string DTHuesped::get_contrasena(){
    return this -> contrasena;
}
    
bool DTHuesped::get_es_tecno(){
    return this -> es_tecno;
}