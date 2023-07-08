/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   socio.h
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 14:03
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


#ifndef SOCIO_H
#define SOCIO_H

#include <sstream>
using std::string;


class socio {
    
public:
       
    socio(string, string, string, string, string);
    virtual ~socio();
    virtual string toStringSocio();
    virtual string toStringEspecifico();
    virtual string asignaInstructor();
    //Get y Set
    virtual string getNombre();
    virtual void setNombre(string);
    virtual string getCed();
    virtual void setCed(string);
    virtual string getCorreo();
    virtual void setCorreo(string);
    virtual string getTelefono();
    virtual void setTelefono(string);
    virtual string getFechaInscripcion();
    virtual void setFechaInscripcion(string);
    

private:
    string nombre;
    string ced;
    string correo;
    string telefono;
    string fechaInscripcion;     
};

#endif /* SOCIO_H */

