/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   salon.h
 * Author: ESCINF
 *
 * Created on 30 de septiembre de 2019, 18:16
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


#ifndef SALON_H
#define SALON_H


#include <sstream>
using std::string;

#include "listaClase.h"


class salon {
    
public:
    salon(string, string, string);
    salon();
    virtual ~salon();
    virtual string toStringSalon(); 
    virtual void setNombre(string);
    virtual void setCapacidad(string);
    virtual void setCodigo(string);
    virtual string getNombre();
    virtual string getCapacidad();
    virtual string getCodigo();
    
    
private:
    string nombre;
    string capacidad;
    string codigo;
    listaClase* _clases;
};

#endif /* SALON_H */

