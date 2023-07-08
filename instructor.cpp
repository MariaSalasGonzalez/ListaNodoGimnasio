/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   instructor.cpp
 * Author: ESCINF
 * 
 * Created on 14 de octubre de 2019, 14:24
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
using namespace std;

#include "instructor.h"

instructor::instructor(string nombre, string id, string codigo, string disponibilidad):
        nombre(nombre),
        id(id),
        codigo(codigo),
        disponibilidad(disponibilidad){
}


instructor::instructor(){
        nombre= "";
        id= "";
        codigo= "";
        disponibilidad= "";
}


instructor::~instructor() {
}

string instructor::toStringInstructor(){
    stringstream s;
    s<<"\n";
    s<<"_______                   _______"<<"\n";
    s<<"_______I N S T R U C T O R_______"<<"\n";
    s<<"\n";
    s<<"Los datos del instructor son: "<<"\n";
    s<<"\n";
    s<<"Nombre: "<<nombre<<"\n";   
    s<<"Cedula: "<<id<<"\n"; 
    s<<"Codigo: "<<codigo<<"\n"; 
    s<<"Disponibilidad: "<<disponibilidad<<"\n";  
    return s.str();
}

void instructor::setNombre(string nombre){
    nombre= nombre;
}

string instructor::getNombre(){
    return nombre;
}

void instructor::setId(string id){
    id= id;
}

string instructor::getId(){
    return id;
}


void instructor::setCodigo(string codigo){
    codigo= codigo;
}

string instructor::getCodigo(){
    return codigo;
}


void instructor::setDisponibilidad(string disponibilidad){
    disponibilidad= disponibilidad;
}

string instructor::getDisponibilidad(){
    return disponibilidad;
}

string instructor::listaInstructores(){
	stringstream s;
	s << "Nombre del Instructor: "<<nombre<<endl<<endl;
	s << nombre << toStringInstructor()<<endl;
	return s.str();
}

