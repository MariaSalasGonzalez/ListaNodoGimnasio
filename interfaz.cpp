/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   interfaz.cpp
 * Author: ESCINF
 * 
 * Created on 14 de octubre de 2019, 14:52
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
using std::cout;
using std::cin;
using namespace std;

#include "interfaz.h"


interfaz::interfaz():_gimnasio(new gimnasio("ruta")) {
}


void interfaz::encabezado(){
    titulo();
}

void interfaz::titulo(){
    cout<<"\n";
    cout<<"   __________________________________________  "<<"\n";
    cout<<" ||                                          ||"<<"\n";
    cout<<" ||                   G  I  M  N  A  S  I  O ||"<<"\n";
    cout<<" ||                            V  I  T  A  L ||"<<"\n";
    cout<<" ||                            S  A  L  U  D ||"<<"\n";
    cout<<" ||__________________________________________||"<<"\n";
}


void interfaz::mostrarMenuPrincipal() {
    encabezado();
    cout<<"\n";
    cout<<"   __________________________________________  "<<"\n";
    cout<<" ||                                          ||"<<"\n";
    cout<<" ||------ M E N U  P R I N C I P A L --------||"<<"\n";
    cout<<" ||__________________________________________||"<<"\n";
    cout<<" ||------------------------------------------||"<<"\n";
    cout<<" || Opciones -->                             ||    \n";
    cout<<" ||------------------------------------------||"<<"\n";
    cout<<" || [1] Instructores                         ||"<<"\n";
    cout<<" || [2] Socios                               ||"<<"\n";   
    cout<<" || [3] Rutinas                              ||"<<"\n";
    cout<<" || [4] Clases                               ||"<<"\n";
    cout<<" || [5] Archivos                             ||"<<"\n";
    cout<<" || [6] Salir                                ||"<<"\n";
    cout<<" ||__________________________________________||"<<"\n";
}


void interfaz::subMenuInstructores(){
    cout<<"\n";
    cout<<"   ______________________________________________  "<<'\n';
    cout<<" ||                                              ||"<<"\n";
    cout<<" ||------- M E N U  I N S T R U C T O R E S -----||"<<"\n";
    cout<<" ||______________________________________________||"<<"\n";
    cout<<" ||----------------------------------------------||"<<"\n";
    cout<<" || Opciones -->                                 ||    \n";
    cout<<" ||----------------------------------------------||"<<"\n";
    cout<<" || [1] Ingresar instructor                      ||"<<"\n";
    cout<<" || [2] Visualizar lista instructores            ||"<<"\n";   
    cout<<" || [3] Recuperar instructor                     ||"<<"\n";
    cout<<" || [4] Instructor mejores resultados con socios ||"<<"\n";
    cout<<" || [5] Salir                                    ||"<<"\n";
    cout<<" ||______________________________________________||"<<"\n";
}


void interfaz::subMenuSocios(){
    cout<<"\n";
    cout<<"   ______________________________________________  "<<"\n";
    cout<<" ||                                              ||"<<"\n";
    cout<<" ||-------------- M E N U  S O C I O S ----------||"<<"\n";
    cout<<" ||______________________________________________||"<<"\n";
    cout<<" ||----------------------------------------------||"<<"\n";
    cout<<" || Opciones -->                                 ||    \n";
    cout<<" ||----------------------------------------------||"<<"\n";
    cout<<" || [1] Agregar socio                            ||"<<"\n";
    cout<<" || [2] Asignacion instructor                    ||"<<"\n";   
    cout<<" || [3] Lista general de socios                  ||"<<"\n";
    cout<<" || [4] Visualizar info de socio                 ||"<<"\n";
    cout<<" || [5] Control de avance (peso,IMC,% grasa,etc) ||"<<"\n";
    cout<<" || [6] Lista socios por resultados              ||"<<"\n";
    cout<<" || [7] Lista socios por instructor              ||"<<"\n";
    cout<<" || [8] Salir                                    ||"<<"\n";
    cout<<" ||______________________________________________||"<<"\n";
    
}

void interfaz::subMenuRutinas(){
    cout<<"\n";
    cout<<"   __________________________________________  "<<"\n";
    cout<<" ||                                          ||"<<"\n";
    cout<<" ||--------- M E N U  R U T I N A S ---------||"<<"\n";
    cout<<" ||__________________________________________||"<<"\n";
    cout<<" ||------------------------------------------||"<<"\n";
    cout<<" || Opciones -->                             ||    \n";
    cout<<" ||------------------------------------------||"<<"\n";
    cout<<" || [1] Ingresar rutina                      ||"<<"\n";
    cout<<" || [2] Asignacion rutina a socio            ||"<<"\n";   
    cout<<" || [3] Ver rutinas vencidas por instructor  ||"<<"\n";
    cout<<" || [4] Buscar y ver rutinas especificas     ||"<<"\n";
    cout<<" || [5] Salir                                ||"<<"\n";
    cout<<" ||__________________________________________||"<<"\n";
}

void interfaz::subMenuClases(){
    cout<<"\n";
    cout<<"   __________________________________________  "<<"\n";
    cout<<" ||                                          ||"<<"\n";
    cout<<" ||----------- M E N U  C L A S E S ---------||"<<"\n";
    cout<<" ||__________________________________________||"<<"\n";
    cout<<" ||------------------------------------------||"<<"\n";
    cout<<" || Opciones -->                             ||    \n";
    cout<<" ||------------------------------------------||"<<"\n";
    cout<<" || [1] Crear clase grupal                   ||"<<"\n";
    cout<<" || [2] Ver clase especifica                 ||"<<"\n";   
    cout<<" || [3] Matricular socio en clase especifica ||"<<"\n";
    cout<<" || [4] Ver clase por salon                  ||"<<"\n";
    cout<<" || [5] Ver socio por clase                  ||"<<"\n";
    cout<<" || [6] Salir                                ||"<<"\n";
    cout<<" ||__________________________________________||"<<"\n";
}

void interfaz::subMenuArchivos(){
    cout<<"\n";
    cout<<"   __________________________________________  "<<"\n";
    cout<<" ||                                          ||"<<"\n";
    cout<<" ||-------- M E N U  A R C H I V O S --------||"<<"\n";
    cout<<" ||__________________________________________||"<<"\n";
    cout<<" ||------------------------------------------||"<<"\n";
    cout<<" || Opciones -->                             ||    \n";
    cout<<" ||------------------------------------------||"<<"\n";
    cout<<" || [1] Guardar clase                        ||"<<"\n";
    cout<<" || [2] Recuperar clase                      ||"<<"\n";   
    cout<<" || [3] Guardar salon                        ||"<<"\n";
    cout<<" || [4] Recuperar salon                      ||"<<"\n";
    cout<<" || [5] Guardar instructor                   ||"<<"\n";
    cout<<" || [6] Recuperar instructor                 ||"<<"\n";
    cout<<" || [7] Salir                                ||"<<"\n";
    cout<<" ||__________________________________________||"<<"\n";
}

void interfaz::iniciar(){
        int opcion;  
    do{  
        mostrarMenuPrincipal();
        opcion= pedirOpcion();
        switch(opcion){
            case 1:
                iniciarIns();
                break;
            case 2:
                iniciarSoc();
                break;
            case 3:
                iniciarRut();
                break;
            case 4:
                iniciarCla();
                break;
            case 5:
                iniciarArc();
                break;
            case 6:
                cout<<"Aplicacion cerrando..";
                break;
            default:
                break;
        } 
    }
    while(opcion >= 1 && opcion < 6); 
}

int interfaz::pedirOpcion(){ 
    int opcion;
    cout<<" Digite la opcion deseada"<<"\n";
    cin>>opcion;
    
    if(cin.fail()){
        cin.clear();
        cin.ignore(1024, '\n');
        opcion= 0;
    }
    while(opcion > 6 || opcion < 1){
        cout<<" Solo ingrese numeros [1-6]"<<endl;
        Sleep(2000);
        opcion= pedirOpcion();
    }
    return opcion;
}

//I N S T R U C T O R
void interfaz::iniciarIns(){
        int opcion;
        
    do{ 
        subMenuInstructores();
        opcion= pedirOpcionIns();
        switch(opcion){
            case 1:
                ingresarInstructor();
                break;
            case 2:
                visualizarListaInstructores();
                break;
            case 3:
                recuperarInstructor();
                break;
            case 4:
                break;  
            case 5:
                cout<<"Aplicacion cerrando.."<<endl; 
                break;
            default:
                break;
        }  
    }
    while(opcion >= 1 && opcion < 6);
}
 

int interfaz::pedirOpcionIns(){ 
    int opcion;
    cout<<" Digite la opcion deseada"<<"\n";
    cin>>opcion;
    
    if(cin.fail()){
        cin.clear();
        cin.ignore(1024, '\n');
        opcion= 0;   
    }
    while(opcion > 5 || opcion < 1){
        cout<<" Solo ingrese numeros [1-5]"<<endl;
        Sleep(2000);
    opcion= pedirOpcionIns();  
    }
     return opcion;
}


instructor* interfaz::ingresarInstructor(){
    string nombre, codigo, id, disponibilidad;
    instructor* ins;
    cout<<"Digite el nombre"<<"\n";
    cin.ignore();
    getline(cin, nombre);
    cout<<"Digite el codigo"<<"\n";
    getline(cin, codigo);
    cout<<"Digite la cedula"<<"\n";
    getline(cin, id);
    cout<<"Digite la disponibilidad"<<"\n";
    getline(cin, disponibilidad);
    ins= new instructor(nombre, codigo, id, disponibilidad);
    _gimnasio->agregarInstructor(ins);
    cout<<"Instructor agregado: \n";
    cout <<_gimnasio->listarInstructor();
}

instructor* interfaz::recuperarInstructor(){
    string codigo;
    cout<<"Ingrese el codigo del Instructor: "<<"\n";
    getline(cin, codigo);
    _gimnasio->recuperarInstructor(codigo);
    _gimnasio->listarInstructor();  
}


instructor* interfaz::visualizarListaInstructores(){
    string codigo;
    cout<<"Digite el codigo del salon: "<<"\n";     
    getline(cin, codigo);
    cout<<_gimnasio->listarInstructor();
}

//S O C I O
void interfaz::iniciarSoc(){
        int opcion;
        subMenuSocios();
        
    do{ 
        opcion= pedirOpcionSoc();
        switch(opcion){
            case 1:            
                agregarSocio();
                break;
            case 2:
                asignaInstructor();
            case 3:
                listaGeneralSocio();
                break;
            case 4:
                visualizarInfoSocioEspecifico();
                break;
            case 5:
                
                break;
            case 6:
                break; 
            case 7:
                break;
            case 8:
                cout <<"Aplicacion cerrando..";
            default:
                break;
        } 
    }
    while(opcion >= 1 && opcion <= 8);
}

int interfaz::pedirOpcionSoc(){ 
    int opcion;
    cout<<" Digite la opcion deseada"<<"\n";
    cin>>opcion;
    
    if(cin.fail()){
        cin.clear();
        cin.ignore(1024, '\n');
        opcion= 0;
    }
    while(opcion > 8 || opcion < 1){
        cout<<" Solo ingrese numeros [1-8]"<<endl;
        Sleep(2000);
        opcion= pedirOpcionSoc();
    }
    return opcion;
}

socio* interfaz::agregarSocio(){
        socio* soc;
        string nombre;
        string ced;
        string correo;
        string telefono;
        string codigo;
        string fechaInscripcion;
        float porcGrasaCorporal;
        float porcMasaCorporal;
        float peso;
         cin.ignore();
         cout<<"Digite el nombre: "<<"\n";
         getline(cin, nombre);
         cout<<"Digite la cedula: "<<"\n";
         getline(cin, ced);
         cout<<"Digite el correo: "<<"\n";     
         getline(cin,correo);
         cout<<"Digite el telefono: "<<"\n";
         getline(cin, telefono);
         cout<<"Digite la fecha de inscripcion: "<<"\n";
         getline(cin, fechaInscripcion);
         cout<<"Digite el porcentaje de grasa corporal: "<<"\n";
         cin>>porcGrasaCorporal;
         cout<<"Digite el porcentaje de masa corporal: "<<"\n";
         cin>>porcMasaCorporal;
         cout<<"Digite el peso: "<<"\n";
         cin>>peso;
         cout<<"Socio agregado:" <<"\n";
         cout<<_gimnasio->listarInstructor();
          soc= new socio(nombre, ced, correo, telefono, fechaInscripcion);
         _gimnasio->agregarSocio(soc);
         cout <<_gimnasio->listarSocios();
}   

void interfaz::socioEspecifico(){
    string cedula;
    socio* soci;
    cout<< "Ingrese la cedula del socio. \n \n";
    cin>> cedula;
    soci= _gimnasio->recuperarSocio(cedula);
    if (soci != NULL){
        soci->toStringEspecifico();
    } else {
        cout<<"No existe ese socio. \n \n";
    }
}
  

socio* interfaz::asignaInstructor(){
        instructor* _instructor;
        string codigo; 
        cout<<_gimnasio->listarInstructor();
        cout<<"Digite el codigo del instructor: "<<"\n";
        cin>>codigo;
        _instructor= _gimnasio->recuperarInstructor(codigo);
}


void interfaz::listaGeneralSocio(){
cout <<_gimnasio->listarSocios();
}

void interfaz::visualizarInfoSocioEspecifico(){
    string ced;
    cout<<"Digite la cedula del socio: "<<"\n";
    cin>>ced;
    cout<<_gimnasio->recuperarSocio(ced);
    cout<<_clase->toStringClase();
}

//visualizar clases por salon
//pedir codigo de salon
//llamar al metodo recuperar salon
//muestra por pantalla el metodo mostrar clases de ese salon
//en salon debe de haber un metodo mostrar clases que retirne el tostring del arreglo clases que tiene ese salon


//R U T I N A
void interfaz::iniciarRut(){
        int opcion;
        subMenuRutinas();
    do{ 
        opcion= pedirOpcionRut();
        switch(opcion){
            case 1:  
                agregarRutina();
                break;
            case 2:
                asignaRutinaSocio();
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                cout<<"Aplicacion cerrando..";  
            default:
                break;
        } 
    }
    while(opcion >= 1 && opcion <= 5);
}


int interfaz::pedirOpcionRut(){ 
    int opcion;
    cout<<" Digite la opcion deseada"<<"\n";
    cin>>opcion;
    
    if(cin.fail()){
        cin.clear();
        cin.ignore(1024, '\n');
        opcion= 0;
    }
    while(opcion > 5 || opcion < 1){
        cout<<" Solo ingrese numeros [1-5]"<<endl;
        Sleep(2000);
        opcion= pedirOpcionRut();
    }
    return opcion;
}


rutina* interfaz::agregarRutina(){
    string nombre;
    string codificacionAuto;
    int fechaCreacion;
    int fechaEstFinalizacion;
    string objetivo;
    rutina* rut;
    socio* soc;
    cin.ignore();
    cout<<"Digite el nombre de la rutina: "<<"\n";
    getline(cin, nombre);
    cout<<"Digite el codigo: "<<"\n";
    getline(cin, codificacionAuto);
    cout<<"Digite la fecha de creacion: "<<"\n";
    cin>>fechaCreacion;
    cout<<"Digite la fecha estimada de finalizacion: "<<"\n";
    cin>>fechaEstFinalizacion;
    rut= new rutina(nombre, codificacionAuto, fechaCreacion, fechaEstFinalizacion, objetivo);
    _gimnasio->agregarRutina(rut);
    cout<<"Rutina agregada: \n";
    cout <<_gimnasio->listarRutinas();  
}         
 

void interfaz::asignaRutinaSocio(){
        string codificacionAuto;
        rutina* _rutina;
        socio* soc;
        cout<<_gimnasio->listarRutinas();
        cout<<"Digite el codigo del instructor: "<<"\n";
        getline(cin, codificacionAuto);
        _rutina = _gimnasio->recuperarRutina(codificacionAuto); 
        _gimnasio->agregarSocio(soc);
        cout<<"Socio agregado: \n";
        cout <<_gimnasio->listarSocios();
}


//C L A S E
void interfaz::iniciarCla(){
        int opcion;
        subMenuClases();   
    do{  
        opcion= pedirOpcionCla();
        switch(opcion){
            case 1:            
                break;
            case 2:
                visualizarClaseEspecifica();
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                cout<<"Aplicacion cerrando..";
                break;
            default:
                break;
        } 
    }
    while(opcion >= 1 && opcion <= 6);
}



int interfaz::pedirOpcionCla(){ 
    int opcion;
    cout<<" Digite la opcion deseada"<<"\n";
    cin>>opcion;
    
    if(cin.fail()){
        cin.clear();
        cin.ignore(1024, '\n');
        opcion= 0;
    }
    
    while(opcion > 6 || opcion < 1){
        cout<<" Solo ingrese numeros [1-6]"<<endl;
        Sleep(1000);
        opcion= pedirOpcionCla();
    }
    return opcion;
}


                
clase* interfaz::visualizarClaseEspecifica(){
         clase* cla;
         string nombre;
         string codigo;
         string horario;
         int capacidad;
         cin.ignore();
         cout<<"Digite el nombre de la clase: "<<"\n";
         getline(cin, nombre);
         cout<<"Digite la capacidad de la clase: "<<"\n";
         cin>> capacidad;
         cout<<"Digite el codigo: "<<"\n";
         getline(cin, codigo);
         cout<<"Digite el horario: "<<"\n";     
         getline(cin, horario);
         cout<<"Clase agregada:" <<"\n";
         cout<<_gimnasio->listarInstructor();
         cla= new clase(nombre, capacidad, codigo, horario);
         _gimnasio->agregarClase(cla);
         cout <<_gimnasio->listarClase();
}    

clase* interfaz::visualizarClasePorSalon(){
    string codigo;
    cout<<"Digite el codigo del salon: "<<"\n";     
    getline(cin, codigo);
    _gimnasio->recuperarSalon(codigo);
    cout<<_gimnasio->listarSalon();
}


//A R C H I V O 
void interfaz::iniciarArc(){
        int opcion;
        subMenuArchivos();
    do{  
        opcion= pedirOpcionArc();
        switch(opcion){
            case 1:            
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                cout<<"Aplicacion cerrando..";  
            default:
                break;
        } 
    }
    while(opcion >= 1 && opcion <= 7);
}


int interfaz::pedirOpcionArc(){ 
    int opcion;
    cout<<" Digite la opcion deseada"<<"\n";
    cin>>opcion;
    
    if(cin.fail()){
        cin.clear();
        cin.ignore(1024, '\n');
        opcion= 0;
    }
    while(opcion > 7 || opcion < 1){
        cout<<" Solo ingrese numeros [1-7]"<<endl;
        Sleep(2000);
        opcion= pedirOpcionArc();
    }
    return opcion;
}


interfaz::~interfaz(){
}