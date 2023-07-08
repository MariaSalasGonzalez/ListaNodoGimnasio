/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoClase.h
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

#ifndef NODOCLASE_H
#define NODOCLASE_H

#include <fstream>
#include "clase.h"

class nodoClase {
public:
    nodoClase(clase*, nodoClase*);
    virtual ~nodoClase();
    virtual string toStringNodoClase();
    virtual clase* getDato();
    virtual nodoClase* getSiguiente();
    virtual void setDato(clase*);
    virtual void setSiguiente(nodoClase*);
    
    
private:
    clase* dato;
    nodoClase* siguiente;

};



#endif /* NODOCLASE_H */

