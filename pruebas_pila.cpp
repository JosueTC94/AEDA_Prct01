#include <iostream>
#include "lista.cpp"
#include "pila.hpp"

using namespace std;

int main()
{

    cout << "----Pruebas realizadas sobre estructura dinamica de datos---" << endl;
    cout << "pila" << endl;
    cout << "1.-Se crea una pila." << endl;
    //Creamos la pila
    pila p1;
    cout << endl;

    cout << "2.-Se comprueba que la pila esta vacia." << endl;
    //Comprobamos que la pila esta vacia
    if(p1.is_empty() == true)
    {
      cout << "\t-pila vacia" << endl;
    }
    else
    {
      cout << "\t-pila no vacia" << endl;
    }
    cout << endl;
    cout << "Top de la pila->" << p1.get_top() << endl;

    cout << "3.-Se insertan varios elementos en la pila." << endl;
    //Insertamos elementos en la pila
    for(int i=0;i<10;i++)
    {
        p1.push(i);
    }
    p1.mostrar_pila();
    cout << endl;
    cout << endl;
    cout << "Top de la pila->" << p1.get_top() << endl;
    cout << endl;

    cout << "4.-Se comprueba que la pila no esta vacia." << endl;
    //Comprobamos que la pila no esta vacia
    if(p1.is_empty() == true)
    {
      cout << "\t-pila vacia" << endl;
    }
    else
    {
      cout << "\t-pila no vacia" << endl;
    }
    cout << endl;
    cout << "Top de la pila->" << p1.get_top() << endl;

    cout << "5.-Se extrae un dato de la pila" << endl;
    cout << "\t-Estado de la pila antes de extraer el dato:\t ";
    p1.mostrar_pila();
    cout << endl;
    //Extraemos el primer nodo de la pila
    cout << "\t-Dato extraido de la pila: " << p1.pop() << endl;
    cout << "\t-Estado de la pila despues de extraer el primer nodo: ";
    p1.mostrar_pila();
    cout << endl;
    cout << endl;
    cout << "Top de la pila->" << p1.get_top() << endl;

    cout << "6.-Se inserta un elemento en la pila." << endl;
    cout << "\t-Estado de la pila antes de insertar:\t\t ";
    p1.mostrar_pila();
    cout << endl;
    cout << "\t-Insertando en la pila el elemento 9" << endl;
    p1.push(9);
    cout << "\t-Estado de la pila despues de la insercion: \t";
    p1.mostrar_pila();
    cout << endl;
    cout << endl;
    cout << "Top de la pila->" << p1.get_top() << endl;

    cout << "7.-Se inserta un elemento en la pila." << endl;
    cout << "\t-Estado de la pila antes de la insercion:\t ";
    p1.mostrar_pila();
    cout << endl;
    cout << "\t-Insertando en la pila el elemento 10" << endl;
    p1.push(10);
    cout << "\t-Estado de la pila despues de la insercion: \t";
    p1.mostrar_pila();
    cout << endl;
    cout << endl;
    cout << "Top de la pila->" << p1.get_top() << endl;

    cout << "8.-Se extraen todos los elementos hasta el nodo con valor 5(incluido)." << endl;
    cout << "\t-Estado de la pila antes de la insercion:\t ";
    p1.mostrar_pila();
    cout << endl;
    cout << "\t-Borrando pila..." << endl;
    p1.borrar_hasta(5);
    cout << "\t-Estado de la pila despues del borrado: \t";
    p1.mostrar_pila();
    cout << endl;
    cout << "Top de la pila->" << p1.get_top() << endl;


    cout << "10.-Se borran todos los elementos." << endl;
    cout << "\t-Estado de la pila antes del borrado:\t\t ";
    p1.mostrar_pila();
    cout << endl;
    cout << "\t-Borrando pila..." << endl;
    p1.borrar();
    cout << "\t-Estado de la pila despues del borrado: \t\t";
    p1.mostrar_pila();
    cout << endl;

    cout << "10.-Se comprueba que la pila esta vacia." << endl;
    //Comprobamos que la pila no esta vacia
    cout << "\t";
    p1.mostrar_pila();
    return 0;
}
