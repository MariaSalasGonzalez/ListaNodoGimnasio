/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rutina.cpp
 * Author: ESCINF
 * 
 * Created on 30 de septiembre de 2019, 19:21
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

#include "rutina.h"
#include "arregloSalon.h"

rutina::rutina(string nombre, string codificacionAuto, int fechaCreacion, int fechaEstFinalizacion, string objetivo):
        nombre(nombre),
        codificacionAuto(codificacionAuto),
        fechaCreacion(fechaCreacion),
        fechaEstFinalizacion(fechaEstFinalizacion),
        objetivo(objetivo){
}


rutina::rutina(){
        nombre= "";
        codificacionAuto= "";
        fechaCreacion= 0;
        fechaEstFinalizacion= 0;
        objetivo= "";
}


rutina::~rutina() {
    //cout << "Se ha eliminado la rutina" << endl;
}


string rutina::toStringRutina(){
    stringstream s;
    s<<"\n";
    s<<"____________            __________"<<"\n";
    s<<"___________ R U T I N A __________"<<"\n";
    s<<"\n";
    s<<"Los datos de la rutina son: "<<"\n";
    s<<"\n";
    s<<"Nombre: "<<nombre<<"/n";
    s<<"Codificacion Automatica: "<<codificacionAuto<<"/n";
    s<<"Fecha Creacion: "<<fechaCreacion<<"/n";
    s<<"Fecha Est Finalizacion: "<<fechaEstFinalizacion<<"/n";
    s<<"Objetivo: "<<objetivo<<"/n";
    return s.str();
}


string rutina::detalleSocio(){
	actualizaVencida();
	stringstream s;
	s<<codificacionAuto<<"\t"<<fechaEstFinalizacion;
	if (vencida){
        s<<"(vencida)"<<"\n";
        }
	else{
        s<<"(activa)"<<"\n";
	}
	return s.str();
}

void rutina::actualizaVencida(){
	if (diaI > diaV || mesI > mesV || anioI > anioV){
	   vencida= true;
	}
	else vencida= false;	
}



 string rutina::getNombre(){
     return nombre;
 }
 
void rutina::setNombre(string nombre){
    nombre= nombre;
}

string rutina::getCodificacionAuto(){
    return codificacionAuto;
}

void rutina::setCodificacionAuto(string codificacionAuto) {
    codificacionAuto= codificacionAuto;
}

int rutina::getFechaCreacion(){
    return fechaCreacion;
}

void rutina::setFechaCreacion(int fechaCreacion){
    fechaCreacion= fechaCreacion;
}

int rutina::getFechaEstFinalizacion(){
    return fechaEstFinalizacion;
}

void rutina::setFechaEstFinalizacion(int fechaEstFinalizacion){
    fechaEstFinalizacion= fechaEstFinalizacion;
}

string rutina::getObjetivo(){
    return objetivo;  
}

void rutina::setObjetivo(string objetivo){
    objetivo= objetivo;
}

bool rutina::getVencida(){
	return vencida;
}

