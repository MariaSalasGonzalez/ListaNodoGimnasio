/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoRegistroEstadistico.h
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

#ifndef NODOREGISTRO_H
#define NODOREGISTRO_H

#include "registro.h"

class nodoRegistro{
    
public:
    nodoRegistro(registro*, nodoRegistro*);
    virtual ~nodoRegistro();
    virtual string toStringNodoRegistro();
    virtual registro* getDato();
    virtual nodoRegistro* getSiguiente();
    virtual void setDato(registro*);
    virtual void setSiguiente(nodoRegistro*);
    
    
private:
    registro* dato;
    nodoRegistro* siguiente;

};

#endif /* NODOREGISTROESTADISTICO_H */

