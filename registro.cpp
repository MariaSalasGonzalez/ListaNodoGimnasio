/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   registroEstadistico.cpp
 * Author: ESCINF
 * 
 * Created on 7 de noviembre de 2019, 18:46
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


#include <sstream>
using std::stringstream;

#include "registro.h"


registro::registro(float peso, float porcMasaCorporal, float porcGrasaCorporal, float altura, float IMC):
        peso(peso),       
        porcMasaCorporal(porcMasaCorporal),
        porcGrasaCorporal(porcGrasaCorporal),
        altura(altura),
        IMC(IMC){
}


registro::~registro() {
}


double registro::calculaResultados(){
    return porcMasaCorporal- porcGrasaCorporal;
}


void registro::factorIMC(){
	if (IMC < 18.5)estadoIMC = "Bajo Peso";
	if (IMC >= 18.5 && IMC < 24.9) estadoIMC = "Normal";
	if (IMC >= 25 && IMC < 29.9) estadoIMC = "Sobrepeso";
	if (IMC >= 30 && IMC < 34.9) estadoIMC = "Obesidad I";
	if (IMC >= 35 && IMC < 39.9) estadoIMC = "Obesidad II";
	if (IMC >= 40 && IMC < 49.9) estadoIMC = "Obesidad III";
	if (IMC >= 50 ) estadoIMC = "Obesidad IV";

}

float registro::calcularImc(){
	return peso / altura;
}


string registro::toStringRegistro(){
       stringstream s;
        s<<"\n";
    s<<"____________                 ____________"<<"\n";
    s<<"____________R E G I S T R O  ____________"<<"\n";
    s<<"\n";
    s<<"Peso: "<<peso<<"\n";
    s<<"Porcentaje masa corporal: "<<porcMasaCorporal<<"\n";
    s<<"Porcentaje grasa corporal: "<<porcGrasaCorporal<<"\n";
    s<<"Altura: "<<altura<<"\n";
    s<<"IMC: "<<IMC<<"\n";
    return s.str();
}

 

float registro::getPorcGrasaCorporal(){
    return porcGrasaCorporal;
}

void registro::setPorcGrasaCorporal(float porcGrasaCorporal){
    porcGrasaCorporal= porcGrasaCorporal;
}

float registro::getPorcMasaCorporal(){
    return porcMasaCorporal;
}

void registro::setPorcMasaCorporal(float porcMasaCorporal){
    porcMasaCorporal= porcMasaCorporal;
}

float registro::getPeso(){
    return peso;
}

void registro::setPeso(float peso){
    peso= peso;
}


float registro::getDifGrasa(){
    return difGrasa;  
}


void registro::setDifGrasa(float difGrasa){
    difGrasa= difGrasa;
}


float registro::getIMC(){
    return IMC;
}

string registro::getEstadoIMC(){
    return estadoIMC;
}


