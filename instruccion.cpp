/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   instruccion.cpp
 * Author: ESCINF
 * 
 * Created on 14 de octubre de 2019, 14:26
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

#include <iostream>
#include <sstream>
using namespace std;

#include "instruccion.h"

instruccion::instruccion(string series, string repeticiones):
        series(series),
        repeticiones(repeticiones){
}

instruccion::instruccion(){
    series= "";
    repeticiones= "";
}

string instruccion::toStringInstruccion(){
    stringstream s;
    s<<"\n";
    s<<"______                     ______"<<"\n";
    s<<"______I N S T R U C C I O N______"<<"\n";
    s<<"\n";
    s<<"Las instrucciones son: "<<"\n";
    s<<"\n";
    s<<"Series: "<<"\n";
    s<<"Repeticiones: "<<"\n";
    return s.str();
}

instruccion::~instruccion() {
}

