/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoSocio.cpp
 * Author: Maria Salas
 * 
 * Created on 24 de octubre de 2019, 14:33
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

#include "nodoSocio.h"
#include "listaSocio.h"
#include "arregloSalon.h"

#include <sstream>
using std::string;

nodoSocio::nodoSocio(socio* dato, nodoSocio* siguiente):
        dato(dato),
        siguiente(siguiente){
}


nodoSocio::nodoSocio(){
    dato= NULL;
    siguiente= NULL;
}

nodoSocio::~nodoSocio(){
     if(dato != NULL){
        delete dato;
    }
    
    if(siguiente != NULL){
        delete siguiente;
    }

}

void nodoSocio::setDato(socio* dato){
	this->dato = dato;
}

socio* nodoSocio::getDato() {
	return dato;
}

void nodoSocio::setSiguiente(nodoSocio* siguiente){
	this->siguiente = siguiente;
}

nodoSocio* nodoSocio::getSiguiente() {
	return siguiente;
}

string nodoSocio::toStringNodoSocio() {
	return dato->toStringSocio();
}

