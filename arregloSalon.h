/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arregloSalon.h
 * Author: ESCINF
 *
 * Created on 30 de septiembre de 2019, 18:25
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


#ifndef ARREGLOSALON_H
#define ARREGLOSALON_H

#include "salon.h"

class arregloSalon {
public:
    arregloSalon(int);
    virtual int getK();
    virtual void agregarSalon(salon*);
    virtual bool eliminaSalon(int);
    virtual salon* buscarSalon(string);
    virtual salon* recuperarSalon(int);
    virtual salon* recuperarSalonPorCodigo(string);
    virtual string mostrarSalon();
    virtual string toString();
    virtual ~arregloSalon();
     
private:
    salon** salones;
    int k;
    int n;

};

#endif /* ARREGLOSALON_H */


