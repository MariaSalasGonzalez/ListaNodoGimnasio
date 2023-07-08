/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaInstructor.h
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

#ifndef LISTAINSTRUCTOR_H
#define LISTAINSTRUCTOR_H


#include <sstream>
using std::string;

#include "nodoInstructor.h"

class listaInstructor {
public:
    listaInstructor();
    virtual ~listaInstructor();
    virtual void agregarInstructor(instructor*);
    virtual bool eliminaInicio();
    virtual string toStringListaInstructor();
    virtual void inicializarActual();
    virtual instructor* recuperarInstructorArchivo();
    virtual instructor* recuperarInstructor(string);
    virtual int obtenerN();
    instructor* buscarInstructor(string id);
    virtual string listaGeneralSocios();
       
private:
    nodoInstructor* primero;
    nodoInstructor* actual;
    int n;
};

#endif /* LISTAINSTRUCTOR_H */


