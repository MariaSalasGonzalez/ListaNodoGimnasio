/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoRutina.cpp
 * Author: ESCINF
 * 
 * Created on 14 de octubre de 2019, 14:19
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



#include "nodoRutina.h"
#include "listaRutina.h"

#include <sstream>
using std::string;

nodoRutina::nodoRutina(rutina* dato, nodoRutina* siguiente):
        dato(dato),
        siguiente(siguiente){
}


void nodoRutina::setDato(rutina* dato) {
	this->dato = dato;
}

rutina* nodoRutina::getDato() {
	return dato;
}

void nodoRutina::setSiguiente(nodoRutina* siguiente) {
	this->siguiente = siguiente;
}

nodoRutina* nodoRutina::getSiguiente() {
	return siguiente;
}

string nodoRutina::toStringNodoRutina() {
	return dato->toStringRutina();
}