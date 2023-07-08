/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaRegistroEstadistico.cpp
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

#include <iostream>
using std::stringstream;

#include "listaRegistro.h"

listaRegistro::listaRegistro():
   primero(NULL),
   actual(NULL),
   n(0){
}


listaRegistro::~listaRegistro(){
    delete primero;
}


void listaRegistro::agregarRegistro(registro* re){
    primero= new nodoRegistro(re, primero);
    n++;
}


bool listaRegistro::eliminaRegistro(){
	if (primero== NULL){  // caso 1: la lista esta vacia
		return false;
	}
	else{ // caso 2: la lista no esta vacia
		actual= primero;
		primero= primero->getSiguiente();
		delete actual;
		return true;
	}
}



string listaRegistro::toStringListaRegistro(){  
    stringstream s;
    //nodoSocio* actual = primero;
    inicializarActual();
    registro* _registro;
    
    while(actual != NULL){
        _registro= actual->getDato();
        s<<_registro-> toStringRegistro();
        actual= actual-> getSiguiente();
    }
    return s.str();
}

bool listaRegistro::buscarRegistro(float IMC){
	nodoRegistro* temporal= primero;
	if (primero != NULL){
	while(temporal != NULL){
		if(temporal->getDato()->getIMC()== IMC){
			return true;
		}
		else{
		temporal= temporal->getSiguiente();
		}
	}
	}
	return false;
}



void listaRegistro::inicializarActual(){
    actual= primero;
}




