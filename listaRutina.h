/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   listaRutina.h
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 14:16
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

#ifndef LISTARUTINA_H
#define LISTARUTINA_H

#include <sstream>
using std::string;

#include "nodoRutina.h"

class listaRutina {
public:
    listaRutina();
    virtual ~listaRutina();
    virtual void agregarRutina(rutina*);
    virtual bool eliminarRutina(string);
    virtual bool buscarRutina(string);
    rutina* recuperarRutina(string);
    virtual string toStringListaRutina();
    virtual void inicializarActual();
    virtual void actualizarVencimiento();
    virtual string rutinaVenc();
    
private:
    nodoRutina* primero;
    nodoRutina* actual;
    int n;
};

#endif /* LISTARUTINA_H */

