/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaClase.cpp
 * Author: Maria Salas
 * 
 * Created on 28 de octubre de 2019, 23:26
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

#include "listaClase.h"

listaClase::listaClase():
    primero(NULL),
    actual(NULL),
    n(0){
}

int listaClase::getN() {
    return n;
}


void listaClase::inicializarActual(){
    actual= primero;
}

void listaClase::agregarClase(clase* c){
    primero= new nodoClase(c, primero);
    n++;
}


bool listaClase::eliminaInicio(){
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


clase* listaClase::recuperarClaseArchivo(){
    clase* c= actual->getDato();
    actual= actual->getSiguiente();
    return c;
}

clase* listaClase::recuperarClase(string codigo){
    clase* c;
    inicializarActual();
    while(actual != NULL){
        c= actual->getDato();
        if(c->getCodigo()== codigo){
            return c;
        }
        actual = actual->getSiguiente();
    }
    return NULL;
}

string listaClase::toStringListaClase(){  
        stringstream s;
    //nodoClase* actual = primero;
    inicializarActual();
    clase* _clase;
    
    while(actual != NULL){
        _clase= actual->getDato();
        s<<_clase-> toStringClase()<<"\n";
        actual= actual-> getSiguiente();
    }
    
    return s.str();
}

listaClase::~listaClase() {
	delete primero;
}