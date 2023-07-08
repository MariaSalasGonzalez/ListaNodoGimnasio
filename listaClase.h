/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaClase.h
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

#ifndef LISTACLASE_H
#define LISTACLASE_H

#include "nodoClase.h"
#include <sstream>
#include <fstream>
using std::string;


class listaClase{
    
public:
    listaClase();
    virtual int getN();
    virtual void agregarClase(clase*);
    virtual void inicializarActual();
    virtual bool eliminaInicio();
    virtual clase* recuperarClaseArchivo();
    virtual clase* recuperarClase(string);
    virtual string toStringListaClase();
    virtual ~listaClase();
    
private:
    nodoClase* primero;
    nodoClase* actual;
    int n;
};

#endif /* LISTACLASE_H */

    