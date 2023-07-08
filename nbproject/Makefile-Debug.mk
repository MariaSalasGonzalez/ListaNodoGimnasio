#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/arregloSalon.o \
	${OBJECTDIR}/clase.o \
	${OBJECTDIR}/fecha.o \
	${OBJECTDIR}/gestorArchivos.o \
	${OBJECTDIR}/gimnasio.o \
	${OBJECTDIR}/instruccion.o \
	${OBJECTDIR}/instructor.o \
	${OBJECTDIR}/interfaz.o \
	${OBJECTDIR}/listaClase.o \
	${OBJECTDIR}/listaInstructor.o \
	${OBJECTDIR}/listaRegistro.o \
	${OBJECTDIR}/listaRutina.o \
	${OBJECTDIR}/listaSocio.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/nodoClase.o \
	${OBJECTDIR}/nodoInstructor.o \
	${OBJECTDIR}/nodoRegistro.o \
	${OBJECTDIR}/nodoRutina.o \
	${OBJECTDIR}/nodoSocio.o \
	${OBJECTDIR}/registro.o \
	${OBJECTDIR}/rutina.o \
	${OBJECTDIR}/salon.o \
	${OBJECTDIR}/socio.o \
	${OBJECTDIR}/utiles.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyecto2.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyecto2.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/proyecto2 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/arregloSalon.o: arregloSalon.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/arregloSalon.o arregloSalon.cpp

${OBJECTDIR}/clase.o: clase.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/clase.o clase.cpp

${OBJECTDIR}/fecha.o: fecha.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/fecha.o fecha.cpp

${OBJECTDIR}/gestorArchivos.o: gestorArchivos.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gestorArchivos.o gestorArchivos.cpp

${OBJECTDIR}/gimnasio.o: gimnasio.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/gimnasio.o gimnasio.cpp

${OBJECTDIR}/instruccion.o: instruccion.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/instruccion.o instruccion.cpp

${OBJECTDIR}/instructor.o: instructor.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/instructor.o instructor.cpp

${OBJECTDIR}/interfaz.o: interfaz.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/interfaz.o interfaz.cpp

${OBJECTDIR}/listaClase.o: listaClase.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/listaClase.o listaClase.cpp

${OBJECTDIR}/listaInstructor.o: listaInstructor.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/listaInstructor.o listaInstructor.cpp

${OBJECTDIR}/listaRegistro.o: listaRegistro.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/listaRegistro.o listaRegistro.cpp

${OBJECTDIR}/listaRutina.o: listaRutina.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/listaRutina.o listaRutina.cpp

${OBJECTDIR}/listaSocio.o: listaSocio.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/listaSocio.o listaSocio.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/nodoClase.o: nodoClase.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/nodoClase.o nodoClase.cpp

${OBJECTDIR}/nodoInstructor.o: nodoInstructor.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/nodoInstructor.o nodoInstructor.cpp

${OBJECTDIR}/nodoRegistro.o: nodoRegistro.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/nodoRegistro.o nodoRegistro.cpp

${OBJECTDIR}/nodoRutina.o: nodoRutina.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/nodoRutina.o nodoRutina.cpp

${OBJECTDIR}/nodoSocio.o: nodoSocio.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/nodoSocio.o nodoSocio.cpp

${OBJECTDIR}/registro.o: registro.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/registro.o registro.cpp

${OBJECTDIR}/rutina.o: rutina.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/rutina.o rutina.cpp

${OBJECTDIR}/salon.o: salon.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/salon.o salon.cpp

${OBJECTDIR}/socio.o: socio.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/socio.o socio.cpp

${OBJECTDIR}/utiles.o: utiles.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/utiles.o utiles.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
