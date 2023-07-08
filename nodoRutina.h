/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   nodoRutina.h
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 14:19
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


#ifndef NODORUTINA_H
#define NODORUTINA_H

#include "rutina.h"

class nodoRutina {
    
public:
    nodoRutina(rutina*, nodoRutina*);
    virtual rutina* getDato();
    virtual void setDato(rutina*);
    virtual nodoRutina* getSiguiente();
    virtual void setSiguiente(nodoRutina*);
    virtual string toStringNodoRutina();
    
private:
    rutina* dato; 
    nodoRutina* siguiente;

};

#endif /* NODORUTINA_H */

