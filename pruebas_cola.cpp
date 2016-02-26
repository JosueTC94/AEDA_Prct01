#include <iostream>
#include "comun.hpp"
#include "lista.cpp"
#include "cola.hpp"

int main()
{

    cout << "----Pruebas realizadas sobre estructura dinamica de datos---" << endl;
    cout << "COLA" << endl;
    cout << "1.-Se crea una cola." << endl;
    //Creamos la cola
    cola c1;
    cout << endl;

    cout << "2.-Se comprueba que la cola esta vacia." << endl;
    //Comprobamos que la cola esta vacia
    if(c1.is_empty() == true)
    {
      cout << "\t-cola vacia" << endl;
    }
    else
    {
      cout << "\t-cola no vacia" << endl;
    }
    cout << endl;
    cout << "Top de la cola->" << c1.get_top() << endl;

    cout << "3.-Se insertan varios elementos en la cola." << endl;
    //Insertamos elementos en la cola
    for(int i=0;i<10;i++)
    {
        c1.push(i);
    }
    c1.mostrar_cola();
    cout << endl;
    cout << endl;
    cout << "Top de la cola->" << c1.get_top() << endl;
    cout << endl;

    cout << "4.-Se comprueba que la cola no esta vacia." << endl;
    //Comprobamos que la cola no esta vacia
    if(c1.is_empty() == true)
    {
      cout << "\t-cola vacia" << endl;
    }
    else
    {
      cout << "\t-cola no vacia" << endl;
    }
    cout << endl;
    cout << "Top de la cola->" << c1.get_top() << endl;

    cout << "5.-Se extrae un dato de la cola" << endl;
    cout << "\t-Estado de la cola antes de extraer el dato:\t ";
    c1.mostrar_cola();
    cout << endl;
    //Extraemos el primer nodo de la cola
    cout << "\t-Dato extraido de la cola: " << c1.pop() << endl;
    cout << "\t-Estado de la cola despues de extraer el primer nodo: ";
    c1.mostrar_cola();
    cout << endl;
    cout << endl;
    cout << "Top de la cola->" << c1.get_top() << endl;

    cout << "6.-Se inserta un elemento en la cola." << endl;
    cout << "\t-Estado de la cola antes de insertar:\t\t ";
    c1.mostrar_cola();
    cout << endl;
    cout << "\t-Insertando en la cola el elemento 10..." << endl;
    c1.push(10);
    cout << "\t-Estado de la cola despues de la insercion: \t";
    c1.mostrar_cola();
    cout << endl;
    cout << endl;
    cout << "Top de la cola->" << c1.get_top() << endl;

    cout << "7.-Se extrae un nodo de la cola." << endl;
    cout << "\t-Estado de la cola antes de extraer el nodo:\t ";
    c1.mostrar_cola();
    cout << endl;
    cout << "\t-Extrayendo valor: " <<  c1.pop() << endl;
    cout << "\t-Estado de la cola despues de la extraccion: \t";
    c1.mostrar_cola();
    cout << endl;
    cout << endl;
    cout << "Top de la cola->" << c1.get_top() << endl;


    cout << "8.-Se inserta un elemento en la cola." << endl;
    cout << "\t-Estado de la cola antes de la insercion:\t ";
    c1.mostrar_cola();
    cout << endl;
    cout << "\t-Insertando un nuevo dato: ..." << endl;
    c1.push(11);
    cout << "\t-Estado de la cola despues de la insercion: \t";
    c1.mostrar_cola();
    cout << endl;
    cout << endl;
    cout << "Top de la cola->" << c1.get_top() << endl;

    cout << "9.-Se borran todos los elementos hasta el nodo con valor 5(incluido)." << endl;
    cout << "\t-Estado de la cola antes de la insercion:\t ";
    c1.mostrar_cola();
    cout << endl;
    cout << "\t-Borrando cola..." << endl;
    c1.borrar_hasta(5);
    cout << "\t-Estado de la cola despues del borrado: \t";
    c1.mostrar_cola();
    cout << endl;
    cout << "Top de la cola->" << c1.get_top() << endl;

    cout << "10.-Se borran todos los elementos." << endl;
    cout << "\t-Estado de la cola antes del borrado:\t\t ";
    c1.mostrar_cola();
    cout << endl;
    cout << "\t-Borrando cola..." << endl;
    c1.borrar();
    cout << "\t-Estado de la cola despues del borrado: \t";
    c1.mostrar_cola();
    cout << endl;

    cout << "10.-Se comprueba que la cola esta vacia." << endl;
    //Comprobamos que la cola no esta vacia
    c1.mostrar_cola();
    return 0;
}
