#include <iostream>
#include <stdlib.h>
#include "vector.hpp"

using namespace std;

int main()
{
  vector v1;
  TDATO dato_abuscar;
  //vector v2(10);
  cout << "1.- Se crea el vector. La dimension debe ser 0 y y no debe tener elementos:" << endl;
  cout << "Dimension: " << v1.get_dimension() << endl;
  cout << "Elementos: ";
  v1.mostrar_elementos();
  cout << "2.- Se insertan 10 elementos en el vector. La dimension debe ser 10 y no debe estar vacio el vector:" << endl;
  v1.dimensionar(10);
  for(int i=0;i<10;i++)
  {
    v1.insertar(i,i);
  }
  cout << "Dimension: "<< v1.get_dimension() << endl;
  cout << "Elementos: ";
  v1.mostrar_elementos();
  cout << endl;
  cout << "3.- Elimino el elemento en la posicion 3 del vector:" << endl;
  v1.eliminar_xpos(3);
  cout << "Elementos: ";
  v1.mostrar_elementos();
  cout << endl;
  cout << "Dimension: " << v1.get_dimension() << endl;
  cout << "4.- Elimino la celda del vector que contiene el dato 7:" << endl;
  v1.eliminar_dato(7);
  cout << "Elementos: ";
  v1.mostrar_elementos();
  cout << endl;
  cout << "Dimension: " << v1.get_dimension() << endl;
  cout << endl;
  cout << "5.- Inserto el entero 5 al final del vector:" << endl;
  v1.insertar(v1.get_dimension(),5);
  cout << "Elementos: ";
  v1.mostrar_elementos();
  cout << endl;
  cout << "Dimension: " << v1.get_dimension() << endl;
  cout << "6.- Buscar un dato."<< endl;
  cout << "Introduzca dato:";
  cin >> dato_abuscar;
  v1.buscar_dato(dato_abuscar);
  cout << endl;
  cout << "7.- Operaciones con el vector:" << endl;
  v1.operaciones();
  cout << endl;
  return 0;
}
