#include <iostream>

/*Planteamiento:
Se conoce de un alumno: cédula, nombre y tres notas parciales (nota1, nota2, nota3). El programa debe imprimir: cédula, nombre, nota final e indique con un mensaje si el alumno aprobó (nota final >= 48) o no aprobó (nota final < 48) la asignatura.
*/
#include "Alumno.h"

int main() {
  Alumno alumno1;
  string nom,ced;
  float n1,n2,n3;

  cout << "Ingrese la cedula" << endl;
  cin >> ced;
  alumno1.SetCedula(ced);

  cout << "Ingrese el nombre" << endl;
  cin >> nom;
  alumno1.SetNombre(nom);

  cout << "Ingrese la nota1" << endl;
  cin >> n1;
  alumno1.SetNota1(n1);

  cout << "Ingrese la nota2" << endl;
  cin >> n2;
  alumno1.SetNota2(n2);

  cout << "Ingrese la nota3" << endl;
  cin >> n3;
  alumno1.SetNota3(n3);

  cout << "Cedula: " << alumno1.GetCedula() << endl;
	cout << "Nombre: " << alumno1.GetNombre() << endl;
	cout << "Nota Final: " << alumno1.NotaFinal() << endl;
  cout << "El estudiante ha " << alumno1.aprobacion() << endl;

  

  
  
  
}