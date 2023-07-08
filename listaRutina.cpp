/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaRutina.cpp
 * Author: ESCINF
 * 
 * Created on 14 de octubre de 2019, 14:16
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


#include <sstream>
#include <iostream>
using std::stringstream;

#include "listaRutina.h"

listaRutina::listaRutina():
    primero(NULL),
    actual(NULL),
    n(0){
}


listaRutina::~listaRutina() { 
    delete primero;
}


string listaRutina::toStringListaRutina(){
        stringstream r;  
    //nodoRutina* actual = primero;
    inicializarActual();
    rutina* _rutina;
    
    while(actual != NULL){
        _rutina = actual->getDato();
        r << _rutina->toStringRutina();
        actual = actual->getSiguiente();
    }
    
    return r.str();
}


void listaRutina::inicializarActual(){
    actual= primero;
}



void listaRutina::agregarRutina(rutina* r) {
        primero= new nodoRutina(r, primero);
        n++;
}


bool listaRutina::eliminarRutina(string r) {
	nodoRutina* aux = NULL;
	actual = primero;
	if (primero == NULL) {
		return false;
	} if (primero->getDato()->getObjetivo() == r) {
		actual = actual->getSiguiente();
		delete (primero);
		primero = actual;
		return true;
	}
	while (actual != NULL && actual->getDato()->getObjetivo() != r) {
		aux = actual;
		actual = actual->getSiguiente();
	} if (actual == NULL) {
		return false;
	}
	else {
		aux->setSiguiente(actual->getSiguiente());
		delete actual;
		return true;
	}
	return false;
}

//rutina* listaRutina::buscarRutina(string cod){
//	actual= primero;
//	while(actual != NULL) {
//		if (actual->getDato()->getCodificacionAuto() == cod) {
//			return actual->getDato();
//		}
//		actual = actual->getSiguiente();
//	}
//	return NULL;
//}


bool listaRutina::buscarRutina(string objetivo){
	nodoRutina* temporal= primero;
	if (primero != NULL){
	while(temporal != NULL){
		if(temporal->getDato()->getObjetivo()== objetivo){
			return true;
		}
		else{
		temporal= temporal->getSiguiente();
		}
	}
	}
	return false;
}


rutina* listaRutina::recuperarRutina(string codificacionAuto){
    rutina* r;
    inicializarActual();
    while(actual != NULL){
        r= actual->getDato();
        if(r->getCodificacionAuto()== codificacionAuto){
            return r;
        }
        actual = actual->getSiguiente();
    }
    return NULL;
}


void listaRutina::actualizarVencimiento(){
	actual= primero;
	while(actual != NULL) {
		actual->getDato()->actualizaVencida();
		actual= actual->getSiguiente();
	}
}


string listaRutina::rutinaVenc(){
	actualizarVencimiento();
	stringstream s;
	actual= primero;
	while(actual != NULL){
		if(actual->getDato()->getVencida()){
		s<<actual->getDato()->getCodificacionAuto() <<" \t "<<actual->getDato()->getFechaEstFinalizacion()<<"\n";
		}
		actual= actual->getSiguiente();
	}
	return s.str();
}