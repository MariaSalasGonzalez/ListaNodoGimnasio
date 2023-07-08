/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   utiles.cpp
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

#include "utiles.h"


utiles::utiles(){
}


utiles::~utiles(){
}

char utiles::lChar(){
	char c;
	cin >> c;
	return c;
}

string utiles::lC(){
	string x;
	getline(cin, x);
	return x;
}

int utiles::lE(){
	int n;
	while(true){
	    if (cin >> n) {
		cin.clear();
		cin.ignore(1024, '\n');
		return n;
	    }
    else{
    cout << "Valor incorrecto." << endl;
    cin.clear();
    cin.ignore(1024, '\n');
    }
	}
}

float utiles::lD(){
	float n;
	while (true) {
		if (cin >> n) {
			cin.clear();
			cin.ignore(1024, '\n');
			return n;
		}
		else {
			cout << "Valor incorrecto." << endl;
			cin.clear();
			cin.ignore(1024, '\n');
		}
	}
}

void utiles::limpiaPantalla(){
	system("CLEAR");
}

void utiles::iC(string a){
	cout << a;
}

string utiles::getFechaHoy(){
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer, sizeof(buffer), "%d-%m-%Y ", timeinfo);
	std::string str(buffer);

	return str;
}

int utiles::dia(string fecha){
	string a, b;
	a = fecha[0];
	b = fecha[1];

	return stoi(a + b);
}

int utiles::mes(string fecha){
	string a, b;
	a = fecha[3];
	b = fecha[4];
	return stoi(a + b);
}

int utiles::anio(string fecha){
	string a, b,c,d;
	a= fecha[6];
	b= fecha[7];
	c= fecha[8];
	d= fecha[9];
	return stoi(a + b + c + d);
}

void utiles::esperandoEnter(){
	cin.get();
}