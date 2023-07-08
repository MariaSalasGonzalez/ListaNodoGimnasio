/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoClase.cpp
 * Author: Maria Salas
 * 
 * Created on 28 de octubre de 2019, 23:30
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

#include "nodoClase.h"
#include "listaClase.h"

#include <sstream>
using std::string;

nodoClase::nodoClase(clase* dato, nodoClase* siguiente):
        dato(dato),
        siguiente(siguiente){
}

nodoClase::~nodoClase(){
     if(dato != NULL){
        delete dato;
    }
    
    if(siguiente != NULL){
        delete siguiente;
    }

}

void nodoClase::setDato(clase* dato){
	this->dato = dato;
}

clase* nodoClase::getDato(){
	return dato;
}

void nodoClase::setSiguiente(nodoClase* siguiente){
	this->siguiente = siguiente;
}

nodoClase* nodoClase::getSiguiente() {
	return siguiente;
}

string nodoClase::toStringNodoClase() {
	return dato->toStringClase();
}