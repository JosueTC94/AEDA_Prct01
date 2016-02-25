
using namespace std;


typedef int TDATO;
typedef int dimension;

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
    ~vector()
    {

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
      datos = new int[10];
      dimension = dim;
    }

    void insertar(int pos, int dato)
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
};
