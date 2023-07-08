/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   socio.cpp
 * Author: ESCINF
 * 
 * Created on 14 de octubre de 2019, 14:03
 */

/* 
 * Universidad Nacional 
 * Escuela de Informatica
 * EIF 201-Programacion 1
 * Estudiante: Maria Amalia Salas Gonzalez
 * Profesora: Jennifer Fuentes Bustos
 * Grupo: 05
 * Segundo Proyecto
 */

#include <sstream>
using std::stringstream;

#include "socio.h"
#include "listaRutina.h"
#include "listaClase.h"
#include "listaRegistro.h"


socio::socio(string nombre, string ced, string correo, string telefono, string fechaInscripcion):
        nombre(nombre),
        ced(ced),
        correo(correo),
        telefono(telefono),
        fechaInscripcion(fechaInscripcion){
}


socio::~socio() {
}

string socio::toStringSocio(){
    stringstream s;
        s<<"\n";
        s<<"____________         ____________"<<"\n";
        s<<"____________S O C I O____________"<<"\n";
        s<<"\n";
        s<<"Los datos del socio son: "<<"\n";
        s<<"\n";
        s<<"Nombre: "<<nombre<<"\n";
        s<<"Cedula: "<<ced<<"\n";
        s<<"Correo: "<<correo<<"\n";
        s<<"Telefono: "<<telefono<<"\n";
        s<<"Fecha inscripcion: "<<fechaInscripcion<<"\n";
    return s.str();
}


string socio::toStringEspecifico(){
    stringstream s;
        s<<"\n";
        s<<"____________         ____________"<<"\n";
        s<<"____________S O C I O____________"<<"\n";
        s<<"\n";
        s<<"Los datos del socio especifico son: "<<"\n";
        s<<"\n";
        s<<"Nombre: "<<nombre<<"\n";
        s<<"Cedula: "<<ced<<"\n";
        s<<"Fecha inscripcion: "<<fechaInscripcion<<"\n";
        s<<"Correo: "<<correo<<"\n";
        return s.str();  
}


string socio::asignaInstructor(){
    
}



string socio::getNombre(){
    return nombre;
}

void socio::setNombre(string nombre){
        nombre= nombre;
}
    
string socio::getCed(){
    return ced;
}

void socio::setCed(string ced){
    ced= ced;
}

string socio::getCorreo(){
    return correo;
}

void socio::setCorreo(string correo){
    correo= correo;
}

string socio::getTelefono(){
    return telefono;
}

void socio::setTelefono(string telefono){
    telefono= telefono;
}

string socio::getFechaInscripcion(){
    return fechaInscripcion;
}

void socio::setFechaInscripcion(string fechaInscripcion){
    fechaInscripcion= fechaInscripcion;
}

