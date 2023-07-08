/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   clase.cpp
 * Author: ESCINF
 * 
 * Created on 14 de octubre de 2019, 14:25
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

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

#include "clase.h"

clase::clase(string nombre, int capacidad, string codigo, string horario):
        nombre(nombre),
        capacidad(capacidad),
        codigo(codigo),
        horario(horario){
}


void clase::setNombre(string nombre){
     nombre= nombre;
 }

void clase::setCodigo(string codigo){
    codigo= codigo;
}

void clase::setCampoDisponible(string campoDisponible){
     campoDisponible= campoDisponible;
 }

 void clase::setCapacidad(int capacidad){
     capacidad= capacidad;
 }
 
 void clase::setHorario(string horario){
     horario= horario;
 }
 
 string clase::getNombre(){
      return nombre;    
 }
 
 string clase::getCodigo(){
     return codigo;
 }
 
int clase::getCapacidad(){
     return capacidad;
 }
 

 string clase::getCampoDisponible(){
     return campoDisponible;
 }
 
 string clase::getHorario(){
     return horario;
 }
 
 
string clase::toStringClase(){
    stringstream s;
    s<<"\n";
    s<<"____________         ____________"<<"\n";
    s<<"____________C L A S E____________"<<"\n";
    s<<"\n";
    s<<"Los datos de la clase son: "<<"\n";
    s<<"\n";
    s<<"Nombre: "<<nombre<<"\n";
    s<<"Capacidad: "<<capacidad<<"\n";
    s<<"Campos Disponible: "<<campoDisponible<<"\n";      
    return s.str();
}

clase::~clase() {
}
