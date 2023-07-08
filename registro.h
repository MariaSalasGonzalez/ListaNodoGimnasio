/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   registroEstadistico.h
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

#ifndef REGISTRO_H
#define REGISTRO_H

#include <sstream>
using std::string;

class registro{
    
public:
    registro(float, float, float, float, float);
    virtual ~registro();
    
    virtual void factorIMC();
    virtual float calcularImc();
    virtual double calculaResultados();
    virtual string toStringRegistro();
    virtual float getDifGrasa();
    virtual void setDifGrasa(float);
    virtual float getIMC();
    virtual string getEstadoIMC();
    virtual float getPorcGrasaCorporal();
    virtual void setPorcGrasaCorporal(float);
    virtual float getPorcMasaCorporal();
    virtual void setPorcMasaCorporal(float);
    virtual float getPeso();
    virtual void setPeso(float);
    
private:
    float peso;
    float porcGrasaCorporal; 
    float porcMasaCorporal;
    float altura;
    float IMC;
    string resIMC;
    float difGrasa;
    string estadoIMC;

};

#endif /* REGISTRO_H */

