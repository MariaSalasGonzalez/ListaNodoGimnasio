/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoRegistroEstadistico.cpp
 * Author: ESCINF
 * 
 * Created on 7 de noviembre de 2019, 19:09
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

#include "nodoRegistro.h"
#include "listaRegistro.h"

#include <sstream>
using std::string;

nodoRegistro::nodoRegistro(registro* dato, nodoRegistro* siguiente):
        dato(dato),
        siguiente(siguiente){
}

nodoRegistro::~nodoRegistro(){
     if(dato != NULL){
        delete dato;
    }
    
    if(siguiente != NULL){
        delete siguiente;
    }

}

void nodoRegistro::setDato(registro* dato) {
	this->dato = dato;
}

registro* nodoRegistro::getDato() {
	return dato;
}

void nodoRegistro::setSiguiente(nodoRegistro* siguiente) {
	this->siguiente = siguiente;
}

nodoRegistro* nodoRegistro::getSiguiente() {
	return siguiente;
}

string nodoRegistro::toStringNodoRegistro() {
	return dato->toStringRegistro();
}