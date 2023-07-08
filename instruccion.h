/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   instruccion.h
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 14:26
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


#ifndef INSTRUCCION_H
#define INSTRUCCION_H

#include <sstream>
using std::string;

class instruccion {
    
public:
    instruccion(string, string);
    instruccion();
    string toStringInstruccion();
    virtual ~instruccion();
    
private:
    string series;
    string repeticiones;

};

#endif /* INSTRUCCION_H */

