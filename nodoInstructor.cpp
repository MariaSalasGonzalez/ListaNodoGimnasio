/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoInstructor.cpp
 * Author: ESCINF
 * 
 * Created on 21 de octubre de 2019, 18:17
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


#include "nodoInstructor.h"
#include "listaInstructor.h"

#include <sstream>
using std::string;

nodoInstructor::nodoInstructor(instructor* dato, nodoInstructor* siguiente):
        dato(dato),
        siguiente(siguiente){
}

nodoInstructor::~nodoInstructor(){
     if(dato != NULL){
        delete dato;
    }
    
    if(siguiente != NULL){
        delete siguiente;
    }

}

void nodoInstructor::setDato(instructor* dato) {
	this->dato = dato;
}

instructor* nodoInstructor::getDato() {
	return dato;
}

void nodoInstructor::setSiguiente(nodoInstructor* siguiente) {
	this->siguiente = siguiente;
}

nodoInstructor* nodoInstructor::getSiguiente() {
	return siguiente;
}

string nodoInstructor::toStringNodoInstructor() {
	return dato->toStringInstructor();
}