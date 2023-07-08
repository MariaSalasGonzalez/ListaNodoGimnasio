/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   salon.cpp
 * Author: ESCINF
 * 
 * Created on 30 de septiembre de 2019, 18:16
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

#include "salon.h"
#include "arregloSalon.h"

salon::salon(string nombre, string capacidad, string codigo):
        nombre(nombre),
        capacidad(capacidad),
        codigo(codigo), _clases(new listaClase)  {
}


salon::salon(){
    nombre= "";
    capacidad= "";
    codigo= "";
}


salon::~salon() {   
}

string salon::toStringSalon(){
    stringstream s;
    s<<"\n";
    s<<"____________         ____________"<<"\n";
    s<<"____________S A L O N____________"<<"\n";
    s<<"\n";
    s<<"Los datos del salon son: "<<"\n";
    s<<"\n";
    s<<"Nombre: "<<nombre<<"\n";
    s<<"Capacidad: "<<capacidad<<"\n";
    s<<"Codigo: "<<codigo<<"\n";
    return s.str();
}

void salon::setNombre(string nombre){
    this->nombre = nombre;
}

void salon::setCapacidad(string capacidad){
    this->capacidad = capacidad;
}

void salon::setCodigo(string codigo){
    this->codigo = codigo;
}

string salon::getNombre(){
    return nombre;
}

string salon::getCapacidad(){
    return capacidad;
}

string salon::getCodigo(){
    return codigo;
}

