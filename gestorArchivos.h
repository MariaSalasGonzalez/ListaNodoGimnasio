/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gestorArchivos.h
 * Author: ESCINF
 *
 * Created on 7 de octubre de 2019, 18:11
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

#ifndef GESTORARCHIVOS_H
#define GESTORARCHIVOS_H

#include <sstream>
using std::string;

#include <fstream>
using namespace std;

#include "listaInstructor.h"
#include "listaClase.h"
#include "arregloSalon.h"
#include "gimnasio.h"

class gimnasio;
class gestorArchivos;

class gestorArchivos{
    
public:
    gestorArchivos(string);
    virtual ~gestorArchivos();
    
    
    //---- PASO 1 ----
    virtual void abrirFlujoModoEscritura();
    virtual void abrirFlujoModoLectura();
    virtual void cerrarFlujo();
    
    
    //---- PASO 2 ----
    static int obtenerInt(std::string);
    static double obtenerDouble(std::string);
    
    
    //---- PASO 3 ----
    //Guardar
    virtual void guardarInt(int,char);
    virtual void guardarDouble(double,char);
    virtual void guardarString(string, char);
    //Recuperar
    virtual int recuperarInt(char);
    virtual double recuperarDouble(char);
    virtual string recuperarString(char);
    
    
    //---- PASO 4 ----
    //Instructor
    virtual void guardarInstructor(instructor*);
    virtual instructor* recuperarInstructor();
    //Salon
    virtual void guardarSalon(salon*);
    virtual salon* recuperarSalon();
    //Clase
    virtual void guardarClase(clase*);
    virtual clase* recuperarClase(gimnasio*);
    
    //----PASO 5 ----
    //Instructor
    virtual void guardarInstructores(listaInstructor*);
    virtual listaInstructor* recuperarInstructores();
    //Salon
    virtual void guardarSalones(arregloSalon*);
    virtual arregloSalon* recuperarSalones();
    //Clase
    virtual void guardarClases(listaClase*);
    virtual listaClase* recuperarClases(gimnasio*);
    
private:
    string ruta;
    fstream archivo;

};

#endif /* GESTORARCHIVOS_H */