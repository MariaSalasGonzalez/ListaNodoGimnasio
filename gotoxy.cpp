/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gotoxy.cpp
 * Author: Maria Salas
 * 
 * Created on 24 de octubre de 2019, 17:56
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

#include "gotoxy.h"

void gotoxy::Gotoxy(int x, int y){
      HANDLE hCon;
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y = y;
      hCon = GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleCursorPosition(hCon, dwPos);
}

