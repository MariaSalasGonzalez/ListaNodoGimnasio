/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoInstructor.h
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

#ifndef NODOINSTRUCTOR_H
#define NODOINSTRUCTOR_H


#include "instructor.h"

class nodoInstructor {
public:
    nodoInstructor(instructor*, nodoInstructor*);
    virtual ~nodoInstructor();
    virtual string toStringNodoInstructor();
    virtual instructor* getDato();
    virtual nodoInstructor* getSiguiente();
    virtual void setDato(instructor*);
    virtual void setSiguiente(nodoInstructor*);
    
    
private:
    instructor* dato;
    nodoInstructor* siguiente;

};

#endif /* NODOINSTRUCTOR_H */

