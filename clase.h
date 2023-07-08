/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   clase.h
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 14:25
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


#ifndef CLASE_H
#define CLASE_H

#include <sstream>
#include <fstream>

using std::string;


class clase{
    
public:
    clase(string, int, string, string);  
    virtual void setNombre(string);
    virtual void setCodigo(string);
    virtual void setCapacidad(int);
    virtual void setCampoDisponible(string);
    virtual void setHorario(string);
    virtual string getNombre();
    virtual string getCodigo();
    virtual int getCapacidad();
    virtual string getCampoDisponible();
    virtual string getHorario();
    virtual string toStringClase();
    virtual ~clase();
    
private:
    string nombre;
    int capacidad;
    string campoDisponible;
    string horario;
    string codigo;
};

#endif /* CLASE_H */

