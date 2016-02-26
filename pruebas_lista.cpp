#include <iostream>
#include "comun.hpp"
#include "lista.cpp"

int main()
{

    cout << "----Pruebas realizadas sobre estructura dinamica de datos---" << endl;
    cout << "LISTA" << endl;
    cout << "1.-Se crea una lista." << endl;
    //Creamos la lista
    lista l1;
    cout << endl;

    cout << "2.-Se comprueba que la lista esta vacia." << endl;
    //Comprobamos que la lista esta vacia
    if(l1.is_empty() == true)
    {
      cout << "\t-Lista vacia" << endl;
    }
    else
    {
      cout << "\t-Lista no vacia" << endl;
    }
    cout << endl;

    cout << "3.-Se insertan varios elementos." << endl;
    //Insertamos elementos en la lista
    for(int i=0;i<10;i++)
    {
        l1.insertar_final(i);
    }
    l1.mostrar_lista();
    cout << endl;
    cout << endl;

    cout << "4.-Se comprueba que la lista no esta vacia." << endl;
    //Comprobamos que la lista no esta vacia
    if(l1.is_empty() == true)
    {
      cout << "\t-Lista vacia" << endl;
    }
    else
    {
      cout << "\t-Lista no vacia" << endl;
    }
    cout << endl;

    cout << "5.-Se extrae el primer nodo de la lista." << endl;
    cout << "\t-Estado de la lista antes de extraer el primer nodo: ";
    l1.mostrar_lista();
    cout << endl;
    //Extraemos el primer nodo de la lista
    cout << "\t-Dato extraido de la lista: " << l1.extraer_inicio() << endl;
    cout << "\t-Estado de la lista despues de extraer el primer nodo: ";
    l1.mostrar_lista();
    cout << endl;
    cout << endl;

    cout << "6.-Se inserta un elemento al principio de la lista." << endl;
    cout << "\t-Estado de la lista antes de insertar al principio: ";
    l1.mostrar_lista();
    cout << endl;
    cout << "\t-Insertando elemento en la lista el elemento 0..." << endl;
    l1.insertar_principio(0);
    cout << "\t-Estado de la lista despues de la insercion: \t";
    l1.mostrar_lista();
    cout << endl;
    cout << endl;

    cout << "7.-Se extrae el ultimo nodo de la lista." << endl;
    cout << "\t-Estado de la lista antes de extraer el ultimo nodo: ";
    l1.mostrar_lista();
    cout << endl;
    cout << "\t-Extrayendo el ultimo dato con valor: " <<  l1.extraer_final() << endl;
    cout << "\t-Estado de la lista despues de la extraccion: \t";
    l1.mostrar_lista();
    cout << endl;
    cout << endl;

    cout << "8.-Se inserta un elemento al final de la lista." << endl;
    cout << "\t-Estado de la lista antes de la insercion:\t ";
    l1.mostrar_lista();
    cout << endl;
    cout << "\t-Insertando un nuevo dato: 9..." << endl;
    l1.insertar_final(9);
    cout << "\t-Estado de la lista despues de la insercion: \t";
    l1.mostrar_lista();
    cout << endl;
    cout << endl;

    cout << "9.-Se borran todos los elementos hasta el nodo con valor 5." << endl;
    cout << "\t-Estado de la lista antes de la insercion:\t ";
    l1.mostrar_lista();
    cout << endl;
    cout << "\t-Borrando lista..." << endl;
    l1.borrar_hasta(5);
    cout << "\t-Estado de la lista despues del borrado: \t";
    l1.mostrar_lista();
    cout << endl;

    cout << "9.-Se borran todos los elementos." << endl;
    cout << "\t-Estado de la lista antes de la insercion:\t ";
    l1.mostrar_lista();
    cout << endl;
    cout << "\t-Borrando lista..." << endl;
    l1.borrar_todo();
    cout << "\t-Estado de la lista despues del borrado: \t";
    l1.mostrar_lista();
    cout << endl;

    cout << "10.-Se comprueba que la lista esta vacia." << endl;
    //Comprobamos que la lista no esta vacia
    l1.mostrar_lista();
    return 0;
}
