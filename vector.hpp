

class vector
{
  private:
  	TDATO* datos;
  	TDATO dimension;
  public:
    vector()
    {
      datos = NULL;
      dimension = 0;
    }
    vector(int tamanio)
    {
      datos = new TDATO[tamanio];
      dimension = tamanio;
    }
    ~vector()
    {
      dimension = 0;
      datos = NULL;
      delete datos;
    }
    int get_dimension(void)
    {
      return dimension;
    }
    void mostrar_elementos(void)
    {
      if(vacio() != true)
      {
        for(int i=0;i<dimension;i++)
        {
          cout << datos[i];
          if(i+1 != dimension )
          {
            cout << ",";
          }
        }
      }
      else
      {
          cout << "El vector no tiene elementos" << endl;
      }
    }
    bool vacio(void)
    {
      if(dimension > 0)
      {
        return false;
      }
      else
      {
        return true;
      }
    }

    void dimensionar(int dim)
    {
      datos = new TDATO[10];
      dimension = dim;
    }

    void insertar(int pos, TDATO dato)
    {
      datos[pos] = dato;
    }
    void eliminar_xpos(int pos)
    {
      int i=pos;
      dimension--;
      while(i<dimension)
      {
        int aux = datos[i+1];
        datos[i] = aux;
        i++;
        if(i == dimension)
        {
          break;
        }
      }
    }
    void eliminar_dato(TDATO dat)
    {
      int i=0;
      bool eliminado = false;
      bool control_final = false;
      while(i<dimension && control_final == false)
      {
        if(datos[i] == dat && eliminado == false)
        {
          datos[i] = datos[i+1];
          eliminado = true;
        }
        else
        {
          if(eliminado == true)
          {
            int aux = datos[i+1];
            datos[i] = aux;
            if(i == dimension-1)
            {
              control_final = true;
            }
          }
          i++;
        }
      }
      dimension--;
    }
    void buscar_dato(TDATO d)
    {
      int i=0;
      bool encontrado = false;
      while(i<dimension && encontrado == false)
      {
          if(datos[i] == d)
          {
            cout << "El dato " << d << " se encuentra en la posicion " << i << " del vector.";
            cout << endl;
            cout << "V: ";
            for(int i=0;i<dimension;i++)
            {
              if(datos[i] == d)
              {
                cout << "[" << datos[i]  << "]";
              }
              else
              {
                cout << datos[i];
              }
              if(i+1 != dimension)
              {
                cout << ",";
              }
            }
            encontrado = true;
          }
          else
          {
              i++;
          }
      }
      if(encontrado == false)
      {
        cout << "El elemento " << d << " no se ha encontrado en el vector" << endl;
      }
    }
    void operaciones(void)
    {
        int escalar=0;
    		int suma_=0;
    		char orden;
    		int divisor=0;
    		int opcion;
    		do
    		{
    			cout << "\tMenu operar datos:"<<endl;
    			cout << "\t1.- Producto escalar"<<endl;
    			cout << "\t2.- Sumar elementos del vector"<<endl;
    			cout << "\t3.- Ordenar"<<endl;
    			cout << "\t4.- Dividir"<<endl;
    			cout << "\t5.- Salir"<<endl;
    			cout << "\tOperacion a elegir:";
    			cin >> opcion;
    			switch(opcion)
    			{
    				case 1:

    						cout << "\tIntroduzca numero para el producto escalar: ";
    						cin >> escalar;
    						cout << "\tVector resultado:"<<endl;
    						cout << "\t";
    						for (int i=0;i<dimension;i++)
    						{
    							datos[i]=escalar*datos[i];
    						}
                mostrar_elementos();
    						cout << endl;
    						cout << "\t-----------------------------------------"<<endl;

    						break;

    				case 2:

    						cout << "\tVector resultado:"<<endl;
    						cout << "\t";
    						for (int i=0;i<dimension;i++)
    						{
    							suma_+=datos[i];
    						}
    						cout << "La suma de los elementos del vector es: "<<suma_;
    						cout << endl;
    						cout << "\t-----------------------------------------"<<endl;

    						break;
    				case 3:
    						//Metodo de la burbuja
    						cout << "\tVector no ordenado:"<<endl;
    						cout << "\t";
                mostrar_elementos();
    						cout << endl;
    						for(int  i=0; i<dimension-1;i++)
    							for(int j=dimension-1;j>=i+1;j--)
    								if(datos[j-1] > datos[j])
    								{
    									int aux = datos[j];
    									datos[j]= datos[j-1];
    									datos[j-1] = aux;
    								}
    						cout << "\tVector ordenado:"<<endl;
    						cout << "\t";
                mostrar_elementos();
    						cout << endl;
    						break;

    				case 4:

    						cout << "\tIntroduzca numero por el que dividir elementos del vector ";
    						cin >> divisor;
    						cout << "\tVector resultado:"<<endl;
    						cout << "\t";
    						for (int i=0;i<dimension;i++)
    						{
    							datos[i]=datos[i]/divisor;
    						}
                mostrar_elementos();
    						cout <<endl;
    						cout << "\t-----------------------------------------"<<endl;

    						break;
    				case 5:
    						opcion = 5;
    						break;
    				default:
    						cout << "\tOpcion elegida incorrecta..."<<endl;
    						cout << "\tSaliendo..."<<endl;
    			}
    		cout << endl;
    	}while(opcion!=5);
    }
};
