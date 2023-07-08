/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rutina.h
 * Author: ESCINF
 *
 * Created on 30 de septiembre de 2019, 19:21
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

#ifndef RUTINA_H
#define RUTINA_H

#include <sstream>
using std::string;

class rutina {
public:
    rutina(string, string, int, int, string);
    rutina();
    virtual ~rutina();
    virtual string toStringRutina();
    virtual void actualizaVencida();
    virtual string detalleSocio();
    //get y set
    string getNombre();
    void setNombre(string);
    string getCodificacionAuto();
    void setCodificacionAuto(string);
    int getFechaCreacion();
    void setFechaCreacion(int);
    int getFechaEstFinalizacion();
    void setFechaEstFinalizacion(int);
    string getObjetivo();
    void setObjetivo(string);
    bool getVencida();
    
    
private:
    string nombre;
    string codificacionAuto;
    int fechaCreacion;
    int fechaEstFinalizacion;
    string objetivo;
    bool vencida;
    
    int diaI;
    int diaV;
    int mesI;
    int mesV;
    int anioI;
    int anioV;
       
};

#endif /* RUTINA_H */
