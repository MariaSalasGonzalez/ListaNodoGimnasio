/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaSocio.h
 * Author: Maria Salas
 *
 * Created on 24 de octubre de 2019, 14:32
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

#ifndef LISTASOCIO_H
#define LISTASOCIO_H

#include <sstream>
using std::string;

#include "nodoSocio.h"

class listaSocio;
class socio;

class listaSocio{
public:
    listaSocio();
   
    virtual void agregarSocio(socio*);
    virtual bool eliminaInicio();
    virtual void inicializarActual();
    virtual void mostrarListaSocio(nodoSocio*);
    virtual socio* recuperarSocioArchivo();
    virtual socio* recuperarSocio(string);
    virtual string toStringListaSocio();
    virtual ~listaSocio();
    
private:
    nodoSocio* primero;
    nodoSocio* actual;
    int n;
};
#endif /* LISTASOCIO_H */

