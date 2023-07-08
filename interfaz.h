/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfaz.h
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 14:52
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

#ifndef INTERFAZ_H
#define INTERFAZ_H

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include "Windows.h"
#include "fecha.h"
#include "utiles.h"
#include "gestorArchivos.h"
#include "gimnasio.h"

using namespace std;

class interfaz{
    
public:
    interfaz();
    virtual ~interfaz();
    virtual void iniciar();
    static void encabezado();
    static void titulo();
    virtual int pedirOpcion(); 
    virtual void mostrarMenuPrincipal();
    //Instructores
    virtual void subMenuInstructores();
    virtual void iniciarIns();
    virtual int pedirOpcionIns();
    instructor* ingresarInstructor();
    virtual instructor* recuperarInstructor();
    virtual instructor* visualizarListaInstructores();
    //Socio
    virtual void subMenuSocios();
    virtual void iniciarSoc();
    virtual void visualizarInfoSocioEspecifico();
    virtual void socioEspecifico();
    virtual int pedirOpcionSoc();
    virtual void listaGeneralSocio();
    virtual socio* agregarSocio();
    virtual socio* asignaInstructor();
    //Rutina
    virtual void subMenuRutinas();
    virtual void iniciarRut();
    virtual int pedirOpcionRut();
    virtual rutina* agregarRutina();
    virtual void asignaRutinaSocio();
    //Clases
    virtual void subMenuClases();
    virtual void iniciarCla();
    virtual int pedirOpcionCla();
    virtual clase* visualizarClaseEspecifica();
    virtual clase* visualizarClasePorSalon();
    //Archivos
    virtual void subMenuArchivos();
    virtual void iniciarArc();
    virtual int pedirOpcionArc();
       
private:
    gimnasio* _gimnasio;
    socio* _socio;
    rutina* _rutina;
    registro* _registro;
    instructor* _instructor;
    clase* _clase;
};

#endif /* INTERFAZ_H */

