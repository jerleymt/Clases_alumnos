/*
 * Alumno.h
 *
 *  Created on: 03/08/2014
 *      Author: francves
 */

/*Planteamiento:
Se conoce de un alumno: cédula, nombre y tres notas parciales (nota1, nota2, nota3). El programa debe imprimir: cédula, nombre, nota final e indique con un mensaje si el alumno aprobó (nota final >= 48) o no aprobó (nota final < 48) la asignatura.
*/


#define ALUMNO_H_
#include <iostream>
#include <string>

using namespace std;

class Alumno {
  private:
    string cedula, nombre;
    float nota1, nota2, nota3;

  public:
    Alumno();
    void SetCedula(string ced);
	  string GetCedula();
	  void SetNombre(string nom);
	  string GetNombre();
	  void SetNota1(float n1);
	  float GetNota1();
	  void SetNota2(float n2);
	  float GetNota2();
	  void SetNota3(float n3);
	  float GetNota3();

    float NotaFinal();
    string aprobacion();

    
};
