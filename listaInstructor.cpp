/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaInstructor.cpp
 * Author: ESCINF
 * 
 * Created on 21 de octubre de 2019, 18:17
 */


#include <iostream>
using std::stringstream;

#include "listaInstructor.h"

listaInstructor::listaInstructor():
    primero(NULL),
    actual(NULL),
    n(0){
}


listaInstructor::~listaInstructor(){
	delete primero;
}


int listaInstructor::obtenerN(){
    return n;
}

string listaInstructor::toStringListaInstructor(){  
        stringstream s;
    //nodoInstructor* actual = primero;
    inicializarActual();
    instructor* _instructor;
    
    while(actual != NULL){
        _instructor= actual->getDato();
        s<<_instructor-> toStringInstructor()<<"\n";
        actual= actual-> getSiguiente();
    }
    
    return s.str();
}

void listaInstructor::inicializarActual(){
    actual= primero;
}



void listaInstructor::agregarInstructor(instructor* i){
    primero= new nodoInstructor(i,primero);
    n++;
}



bool listaInstructor::eliminaInicio(){
	if (primero == NULL){  // caso 1: la lista esta vacia
		return false;
	}
	else{ // caso 2: la lista no esta vacia
		actual = primero;
		primero = primero->getSiguiente();
		delete actual;
		return true;
	}
}

   
instructor* listaInstructor::recuperarInstructorArchivo(){
    instructor* i= actual->getDato();
    actual= actual->getSiguiente();
    return i;
}


instructor* listaInstructor::recuperarInstructor(string codigo) {
    instructor* i;
    inicializarActual();
    while(actual != NULL){
        i = actual->getDato();
        if(i->getCodigo() == codigo){
            return i;
        }
        actual = actual->getSiguiente();
    }
    return NULL;
}


instructor* listaInstructor::buscarInstructor(string id){
	actual= primero;
	while(actual != NULL) {
		if(actual->getDato()->getId()== id) {
			return actual->getDato();
		}
		actual= actual->getSiguiente();
	}
	return NULL;
}




string listaInstructor::listaGeneralSocios(){
	actual= primero;
	stringstream s;
	while (actual != NULL) {
		s<<actual->getDato()->listaInstructores();
		actual = actual->getSiguiente();
	}
	return s.str();
}


