/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fecha.cpp
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

#include "fecha.h"

fecha::fecha(string dia, string, int anio ):
        dia(dia),
        mes(mes),
        anio(anio){
    
}

void fecha::setDia(string dia){
    dia= dia;
}

void fecha::setMes(string mes){
    mes= mes;
}

void fecha::setAnio(int anio){
    anio= anio;
}

string fecha::getDia(){
    return dia;
}

string fecha::getMes(){
    return mes;
}

int fecha::getAnio(){
    return anio;
}

string fecha::toStringFecha(){
    stringstream s;
    s<<"\n";
    s<<"____________         ____________"<<"\n";
    s<<"____________F E C H A____________"<<"\n";
    s<<"\n";
    s<<"Los datos de la fecha son: "<<"\n";
    s<<"\n";
    s<<"Dia: "<<dia<<"\n";
    s<<"Mes: "<<mes<<"\n";
    s<<"Anio: "<<anio<<"\n";
    return s.str();
}


fecha::~fecha(){
    
}