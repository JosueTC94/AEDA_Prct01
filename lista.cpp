#include "nodo.cpp"

class lista
{
private:
  nodo* inicio;
  nodo* final;
public:
  lista()
  {
    inicio = NULL;
    final = NULL;
  }
  lista(nodo* ini)
  {
    inicio = ini;
    final = ini;
  }
  ~lista()
  {
    inicio = NULL;
    final = NULL;
  }
  bool is_empty(void)
  {
    if((inicio == final) && (inicio == NULL) && (final == NULL))
    {
        return true;
    }
    else
    {
        return false;
    }
  }
  void insertar_final(TDATO d)
  {
    nodo* nd = new nodo(d);
    if(is_empty() == true)
    {
      inicio = nd;
      final = nd;
    }
    else
    {
      final->set_siguiente(nd);
      final = nd;
    }
  }
  void insertar_principio(TDATO d)
  {
    nodo* nd = new nodo(d);
    if(is_empty() == true)
    {
      inicio = nd;
      final = nd;
    }
    else
    {
      nd->set_siguiente(inicio);
      inicio = nd;
    }
  }

  TDATO extraer_inicio(void)
  {
    TDATO res=0;
    if(is_empty() != true)
    {
      if(inicio==final)
      {
        res=inicio->get_dato();
        inicio->set_siguiente(NULL);
        inicio=NULL;
        final=NULL;
      }
      else
      {
        res = inicio->get_dato();
        nodo* auxiliar = inicio;
        inicio=inicio->get_siguiente();
        delete auxiliar;
      }
    }
    return res;
  }

  TDATO extraer_final(void)
  {
    TDATO res=0;
    if(is_empty() != true)
    {
      if(inicio==final)
      {
        res=inicio->get_dato();
        inicio->set_siguiente(NULL);
        inicio=NULL;
        final=NULL;
      }
      else
      {
        res = final->get_dato();
        nodo* auxiliar=inicio;
        while(auxiliar->get_siguiente()!=final)
        {
          auxiliar=auxiliar->get_siguiente();
        }
        if(auxiliar->get_siguiente()==final)
        {
          final=auxiliar;
          auxiliar=auxiliar->get_siguiente();
          final->set_siguiente(NULL);
          delete auxiliar;
        }
      }
    }
    return res;
  }

  TDATO* borrar_hasta(TDATO d)
  {
    if(is_empty() != true)
    {
      if(inicio == final)
      {
        if(inicio->get_dato() == d)
        {
          inicio->set_siguiente(NULL);
          inicio = NULL;
          final = NULL;
        }
      }
      else
      {
        nodo* auxiliar = new nodo();
        while(inicio->get_dato()!=d)
        {
          auxiliar=inicio;
          inicio=inicio->get_siguiente();
          auxiliar->set_siguiente(NULL);
          delete auxiliar;
        }
      }
    }
  }

  void borrar_todo(void)
  {
      nodo* auxiliar = new nodo();
      if(is_empty() != true)
      {
        while(inicio!=NULL)
        {
          auxiliar=inicio;
          inicio=inicio->get_siguiente();
          auxiliar->set_siguiente(NULL);
          delete auxiliar;
        }
      }
  }

  void mostrar_lista(void)
  {
    nodo* auxiliar;
    auxiliar=inicio;
    cout << "\t";
    if(inicio==NULL)
    {
      cout << "Lista vacia"<<endl;
    }
    else
    {
      while(auxiliar!=NULL)
      {
        cout << auxiliar->get_dato();
        if(auxiliar->get_siguiente() != NULL)
        {
          cout << ",";
        }
        auxiliar = auxiliar->get_siguiente();
      }
    }
  }

};
