#include <iostream>
#include <stdlib.h>
#include "vector.h"

using namespace std;


int main()
{

  vector v1;
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
  /*cout << "5.- Inserto el entero 5 al final del vector:" << endl;
  v1.insertar_final(5);
  cout << "Elementos: ";
  v1.mostrar_elementos();
  cout << endl;
  cout << "Dimension: " << v1.get_dimension() << endl;*/
  return 0;
}
