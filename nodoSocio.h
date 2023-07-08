/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoSocio.h
 * Author: Maria Salas
 *
 * Created on 24 de octubre de 2019, 14:33
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

#ifndef NODOSOCIO_H
#define NODOSOCIO_H

#include "socio.h"

class nodoSocio {
public:
    nodoSocio(socio*, nodoSocio*);
    nodoSocio();
    virtual ~nodoSocio();
    virtual string toStringNodoSocio();
    virtual socio* getDato();
    virtual nodoSocio* getSiguiente();
    virtual void setDato(socio*);
    virtual void setSiguiente(nodoSocio*);
     
    
    
private:
    socio* dato;
    nodoSocio* siguiente;
};

#endif /* NODOSOCIO_H */

