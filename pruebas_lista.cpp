#include <iostream>


using namespace std;



int main()
{

    cout << "----Pruebas realizadas sobre estructura dinamica de datos---" << endl;
    cout << "LISTA" << endl;
    cout << "1.-Se crea una lista." << endl;
    //Creamos la lista
    lista l1();
    
    cout << "2.-Se comprueba que la lista esta vacia." << endl;
    //Comprobamos que la lista esta vacia
    l1.is_empty();
    
    cout << "3.-Se insertan varios elementos." << endl;
    //Insertamos elementos en la lista
    for(int i=0;i<10;i++)
    {
        l1.insertar_final(i);
    }

    cout << "4.-Se comprueba que la lista no esta vacia." << endl;
    //Comprobamos que la lista no esta vacia  
    l1.is_empty();
    
    cout << "5.-Se extrae el primer nodo de la lista." << endl;
    //Extraemos el primer nodo de la lista
    
    
    
    cout << "6.-Se inserta un elemento al principio de la lista." << endl;
    cout << "7.-Se extrae el ultimo nodo de la lista." << endl;
    cout << "8.-Se inserta un elemento al final de la lista." << endl;
    cout << "9.-Se borran todos los elementos." << endl;
    cout << "10.-Se comprueba que la lista esta vacia." << endl;
    

    return 0;
}