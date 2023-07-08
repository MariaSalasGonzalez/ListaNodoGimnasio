/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   utiles.h
 * Author: Maria Salas
 *
 * Created on 5 de noviembre de 2019, 09:31
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

#ifndef UTILES_H
#define UTILES_H

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <ctime>

using namespace std;

class utiles{
	
public:
	utiles();
	~utiles();
	static char lChar();
	static string lC();
	static int lE();
	static float lD();
	static void esperandoEnter();
	static void limpiaPantalla();
	static void iC(string a);
	static string getFechaHoy();
	static int dia(string);
	static int mes(string);
	static int anio(string);
};

#endif /* UTILES_H */

