/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaRegistroEstadistico.h
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

#ifndef LISTAREGISTRO_H
#define LISTAREGISTRO_H

#include <sstream>
using std::string;

#include "nodoRegistro.h"

class listaRegistro{
    
public:
    listaRegistro();
    virtual ~listaRegistro();
    virtual void agregarRegistro(registro*);
    virtual bool eliminaRegistro();
    virtual bool buscarRegistro(float);
    virtual string toStringListaRegistro();
    virtual void inicializarActual();
    
private:
    nodoRegistro* primero;
    nodoRegistro* actual;
    int n;
};

#endif /* LISTAREGISTROESTADISTICO_H */

