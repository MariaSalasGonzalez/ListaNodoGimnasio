/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gimnasio.cpp
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


#include "gimnasio.h"
#include <fstream>
#include "listaClase.h"

//en el ejercicio estaba como ruta, pero no se como ponerle

gimnasio::gimnasio(string ruta):
        gestor(new gestorArchivos(ruta)),
        socios(new listaSocio()),
        rutinas(new listaRutina()),
        instructores(new listaInstructor()),
        clases(new listaClase()),
        registros(new listaRegistro()),
        salones(new arregloSalon(2)){
}


gimnasio::~gimnasio(){
    delete socios;
    delete rutinas;
    delete instructores;
    delete clases;
    delete salones;
    delete registros;
}

//Listar
string gimnasio::listarSocios(){
    return socios->toStringListaSocio();
}

string gimnasio::listarRutinas() {
    return rutinas->toStringListaRutina();
}

string gimnasio::listarInstructor() {
    return instructores->toStringListaInstructor();
}

string gimnasio::listarClase(){
    return clases->toStringListaClase();
}

string gimnasio::listarSalon(){
    return salones->toString();
}

//Agregar
void gimnasio::agregarSocio(socio* so){
    socios->agregarSocio(so);
}

void gimnasio::agregarRutina(rutina* r){
    rutinas->agregarRutina(r); 
}

void gimnasio::agregarInstructor(instructor* i){
    instructores->agregarInstructor(i); 
}

void gimnasio::agregarClase(clase* c){
    clases->agregarClase(c); 
}

void gimnasio::agregarSalon(salon* sa){
    salones->agregarSalon(sa);
}

//Recuperar    
salon* gimnasio::recuperarSalon(string codigo) {
    return salones->recuperarSalonPorCodigo(codigo);
}
   
instructor* gimnasio::recuperarInstructor(string codigo) {
    return instructores->recuperarInstructor(codigo);
}

rutina* gimnasio::recuperarRutina(string codificacionAuto){
    return rutinas->recuperarRutina(codificacionAuto);
}

clase* gimnasio::recuperarClase(string codigo){
    return clases->recuperarClase(codigo);
}

socio* gimnasio::recuperarSocio(string codigo){
    return socios->recuperarSocio(codigo);
}

//Archivos
void gimnasio::recuperarDatosAplicacion() {
    gestor->abrirFlujoModoLectura();
    instructores = gestor->recuperarInstructores();
    salones = gestor->recuperarSalones();
    clases = gestor->recuperarClases(this);
    gestor->cerrarFlujo();
}


void gimnasio::guardarDatosAplicacion() {
    gestor->abrirFlujoModoEscritura();
    gestor->guardarInstructores(instructores);
    gestor->guardarSalones(salones);
    gestor->guardarClases(clases);
    gestor->cerrarFlujo();
}

