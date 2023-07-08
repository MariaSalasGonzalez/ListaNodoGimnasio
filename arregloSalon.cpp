/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloSalon.cpp
 * Author: ESCINF
 * 
 * Created on 30 de septiembre de 2019, 18:25
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
using std::stringstream;

#include "arregloSalon.h"


arregloSalon::arregloSalon(int n): n(n), k(0){
    for(int i; i<n; i++){
        salones[i]= NULL;
    }
}

int arregloSalon::getK() {
    return k;
}

void arregloSalon::agregarSalon(salon* sa){
    salones[k++] = sa;
}

bool arregloSalon::eliminaSalon(int i){
	if (salones[i] != NULL){
		salones[i] = NULL;
		return true;
	}
	return false;
}


salon* arregloSalon::buscarSalon(string nombre){
	toupper(nombre[0]);
	for(int i = 0; i < 3; i++) {
		if(salones[i]->getNombre() == nombre)
			return salones[i];
	}
	return NULL;
}

salon* arregloSalon::recuperarSalon(int i){
    return salones[i-1];
}

salon* arregloSalon::recuperarSalonPorCodigo(string codigo){
    for(int i=0; i < k; i++){
        if(salones[i]->getCodigo()== codigo){
            return salones[i];
        }
    } 
    return NULL;
}


string arregloSalon::mostrarSalon(){
    stringstream s;
    s<<"Los salones existentes son las siguientes: "<<"\n";
    for(int i=0; i<k; i++) {
	if (salones[i] != NULL) {
	    s<<"El salon numero [" << i << "] es:" <<"\n";
	    s<<salones[i]->toStringSalon() <<"\n";
	}
	}
    return s.str();
}

string arregloSalon::toString(){
    stringstream s;
    for(int i=0; i<k; i++){
        s<<salones[i]->toStringSalon();
    }
        s<<"\n";
    return s.str();
}


arregloSalon::~arregloSalon() {
    for(int i= 0; i<k; i++) {
        if(salones[i]){
	delete[]  salones[i];
	}
    }
    //delete[] salones;
}
