/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaSocio.cpp
 * Author: Maria Salas
 * 
 * Created on 24 de octubre de 2019, 14:32
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
using std::stringstream;

#include "listaSocio.h"

listaSocio::listaSocio():
   primero(NULL),
   actual(NULL),
   n(0){
}


void listaSocio::agregarSocio(socio* so){
    primero= new nodoSocio(so, primero);
    n++;
}


bool listaSocio::eliminaInicio(){
	if (primero== NULL){  // caso 1: la lista esta vacia
		return false;
	}
	else{ // caso 2: la lista no esta vacia
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
	}
}


void listaSocio::inicializarActual(){
    actual= primero;
}


void listaSocio::mostrarListaSocio(nodoSocio* listaSocio){
    nodoSocio *actual= new nodoSocio();
    actual= listaSocio;
    while(actual != NULL){
      actual->getDato();
        actual= actual->getSiguiente();
    }
    
}


socio* listaSocio::recuperarSocioArchivo(){
    socio* s= actual->getDato();
    actual= actual->getSiguiente();
    return s;
}

socio* listaSocio::recuperarSocio(string ced){
    nodoSocio *actual= new nodoSocio();
    socio* s= NULL;
    while(actual != NULL){
      s = actual->getDato();
      if(s->getCed() == ced){
          return s;
      }
        actual= actual->getSiguiente();
    }
    return s;
}


string listaSocio::toStringListaSocio(){  
    stringstream s;
    //nodoSocio* actual = primero;
    inicializarActual();
    socio* _socio;
    
    while(actual != NULL){
        _socio= actual->getDato();
        s<<_socio-> toStringSocio();
        actual= actual-> getSiguiente();
    }
    return s.str();
}

listaSocio::~listaSocio(){
    delete primero;
}
