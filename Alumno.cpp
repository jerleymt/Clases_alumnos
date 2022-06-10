#include "Alumno.h"

Alumno::Alumno() {
	

}


float Alumno::NotaFinal(){
  return (nota1 + nota2 + nota3)/3;
}

string Alumno::aprobacion(){
  if(NotaFinal() >= 3.0)
    return "aprobado";
  else
    return "no aprobado";
}

void Alumno::SetCedula(string ced) {
	cedula = ced;
}

string Alumno::GetCedula() {
	return cedula;
}

void Alumno::SetNombre(string nom) {
	nombre = nom;
}

string Alumno::GetNombre() {
	return nombre;
}

void Alumno::SetNota1(float n1) {
	nota1 = n1;
}

float Alumno::GetNota1() {
	return nota1;
}

void Alumno::SetNota2(float n2) {
	nota2 = n2;
}

float Alumno::GetNota2() {
	return nota2;
}

void Alumno::SetNota3(float n3) {
	nota3 =  n3;
}

float Alumno::GetNota3() {
	return nota3;
}