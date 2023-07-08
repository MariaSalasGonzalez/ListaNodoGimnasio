/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   instructor.h
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 14:24
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


#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <sstream>
using std::string;

class instructor {
    
public:
    instructor(string, string, string, string);
    instructor();
    virtual ~instructor();
    virtual string toStringInstructor();
    virtual string listaInstructores();
    virtual string getNombre();
    virtual void setNombre(string);
    virtual string getId();
    virtual void setId(string);
    virtual string getCodigo();
    virtual void setCodigo(string);
    virtual string getDisponibilidad();
    virtual void setDisponibilidad(string);

    
    
private:
    string nombre;
    string codigo;
    string id;
    string disponibilidad;
    
};

#endif /* INSTRUCTOR_H */

