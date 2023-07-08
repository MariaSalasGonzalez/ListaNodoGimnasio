/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fecha.h
 * Author: Maria Salas
 *
 * Created on 24 de octubre de 2019, 17:52
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

#ifndef FECHA_H
#define FECHA_H

#include <sstream>
using namespace std;

class fecha{
    
public:
    fecha(string, string, int);
    virtual void setDia(string);
    virtual void setMes(string);
    virtual void setAnio(int);
    virtual string getDia();
    virtual string getMes();
    virtual int getAnio();
    virtual string toStringFecha();
    virtual ~fecha();
        
private:
    string dia;
    string mes;
    int anio;
};


#endif /* FECHA_H */

