/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gestorArchivos.cpp
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

#include "gestorArchivos.h"
#include "instructor.h"
#include "listaInstructor.h"

#include <sstream>


gestorArchivos::gestorArchivos(string ruta):
        ruta(ruta){
}


gestorArchivos::~gestorArchivos() {
}


void gestorArchivos::abrirFlujoModoEscritura(){
    archivo.open(ruta.c_str(), ios::out);
}


void gestorArchivos::abrirFlujoModoLectura(){
    archivo.open(ruta.c_str(), ios::in);
}


void gestorArchivos::cerrarFlujo(){
    archivo.close();
}


int gestorArchivos::obtenerInt(std::string s){
    int v;
    std::stringstream r(s);
    r>> v;
    return v;
}


double gestorArchivos::obtenerDouble(std::string s){
    double v;
    std::stringstream r(s);
    r>> v;
    return v;
}


void gestorArchivos::guardarInt(int i, char delimitador){
    archivo<<i<<delimitador;
}


void gestorArchivos::guardarDouble(double d, char delimitador){
    archivo<<d<<delimitador;
}


void gestorArchivos::guardarString(string s, char delimitador){
    archivo<<s<<delimitador;
}


int gestorArchivos::recuperarInt(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return obtenerInt(r);   
}


double gestorArchivos::recuperarDouble(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return obtenerDouble(r);
}


string gestorArchivos::recuperarString(char delimitador){
    string r;
    getline(archivo,r,delimitador);
    return r;
}


void gestorArchivos::guardarInstructor(instructor* i){
    guardarString(i->toStringInstructor(),'\n');
}



instructor* gestorArchivos::recuperarInstructor(){
    instructor* i;    
    string nombre, codigo, id, disponibilidad;
    codigo = recuperarString('\t');
    nombre = recuperarString('\n');
    i = new instructor(nombre,codigo, id, disponibilidad);
    return i;
}


void gestorArchivos::guardarSalon(salon* sa){
    guardarString(sa->toStringSalon(),'\n');
}


salon* gestorArchivos::recuperarSalon(){
    salon* sa;    
    string nombre, codigo, descripcion;
    codigo = recuperarString('\t');
    descripcion = recuperarString('\n');
    sa = new salon(nombre, codigo, descripcion);
    return sa;
}

void gestorArchivos::guardarClase(clase* c) {
    guardarString(c->toStringClase(),'\n');
}
     
    
clase* gestorArchivos::recuperarClase(gimnasio* gim) {
    clase* c; 
    salon* sa;
    instructor* i;
    string nombre, codigo, instructor, horario, codigoSalon, codigoInstructor;
    int capacidad;
    nombre= recuperarString('\t');
    capacidad= recuperarInt('\t');
    instructor= recuperarString('\t');
    horario= recuperarString('\t');
    codigoSalon= recuperarString('\t');
    codigoInstructor= recuperarString('\t');
    sa= gim->recuperarSalon(codigoSalon);
    i= gim->recuperarInstructor(codigoInstructor);
    
    c= new clase(nombre, capacidad, codigo, horario);
    return c;
}


void gestorArchivos::guardarInstructores(listaInstructor* listaIns){
    listaIns->inicializarActual();    
    instructor* in;
    
    int n= listaIns->obtenerN();
    guardarInt(n,'\n');
    
    int i= 0; 
    while(i < n){
        in= listaIns->recuperarInstructorArchivo();
        guardarInstructor(in);
        i++;
    }
}



listaInstructor* gestorArchivos::recuperarInstructores(){
    int cantidadInstructores;
    listaInstructor* listaIns = new listaInstructor();
    instructor* in;
    cantidadInstructores= recuperarInt('\n');
    
    int i= 0;
    while(i < cantidadInstructores){
        in= recuperarInstructor();
        listaIns->agregarInstructor(in);
        i++;
    }    
    return listaIns;
}


void gestorArchivos::guardarSalones(arregloSalon* vectorSalon){   
    salon* sa;
    
    int n= vectorSalon->getK();
    guardarInt(n,'\n');
    
    int i=1; 
    while(i<= n){
        sa = vectorSalon->recuperarSalon(i);
        guardarSalon(sa);
        i++;
    }
}


arregloSalon* gestorArchivos::recuperarSalones() {
    int cantidadSalones;
    arregloSalon* salones = new arregloSalon(2);
    salon* sa;
    cantidadSalones= recuperarInt('\n');
    
    int i= 0;
    while(i < cantidadSalones){
        sa = recuperarSalon();
        salones->agregarSalon(sa);
        i++;
    }    
    return salones;
}


void gestorArchivos::guardarClases(listaClase* clases) {  
    clases->inicializarActual(); 
    clase* c;
    
    int n = clases->getN();
    guardarInt(n,'\n');
    
    int i= 0; 
    while(i < n){
        c= clases->recuperarClaseArchivo();
        guardarClase(c);
        i++;
    }
}


listaClase* gestorArchivos::recuperarClases(gimnasio* gim){
    int cantidadClases;
    listaClase* clases = new listaClase();
    clase* cl;
    cantidadClases= recuperarInt('\n');
    
    int i= 0;
    while(i < cantidadClases){
        cl = recuperarClase(gim);
        clases->agregarClase(cl);
        i++;
    }    
    return clases;
}