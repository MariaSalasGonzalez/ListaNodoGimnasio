 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gimnasio.h
 * Author: ESCINF
 *
 * Created on 14 de octubre de 2019, 14:16
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


#ifndef GIMNASIO_H
#define GIMNASIO_H

#include "arregloSalon.h"
#include "listaInstructor.h"
#include "listaClase.h"
#include "listaRutina.h"
#include "listaSocio.h"
#include "listaRegistro.h"
#include "instruccion.h"
#include "gestorArchivos.h"
#include <fstream>

class gimnasio;
class gestorArchivos;

class gimnasio {
    
public:
    gimnasio(string);
    
    //Listar
    virtual string listarSocios();
    virtual string listarRutinas();
    virtual string listarInstructor();
    virtual string listarClase();
    virtual string listarSalon();
    //Agregar
    virtual void agregarSocio(socio*);
    virtual void agregarRutina(rutina*);
    virtual void agregarInstructor(instructor*);
    virtual void agregarClase(clase*);
    virtual void agregarSalon(salon*);
    //Recuperar
    virtual salon* recuperarSalon(string);
    virtual clase* recuperarClase(string);
    virtual socio* recuperarSocio(string);
    virtual instructor* recuperarInstructor(string);
    virtual rutina* recuperarRutina(string);
    //Archivos
    virtual void recuperarDatosAplicacion();
    virtual void guardarDatosAplicacion();
    virtual ~gimnasio();
    
private:
    listaSocio* socios;
    listaRutina* rutinas;
    listaInstructor* instructores;
    listaClase* clases;
    listaRegistro* registros;
    arregloSalon* salones;
    gestorArchivos* gestor;
};

#endif /* GIMNASIO_H */

