

using namespace std;

class pila
{
private:
	lista list_;
	int top_;
public:
	pila()
	{
		list_;
		top_=-1;
	}

	~pila()
	{
		if(list_.is_empty() != true)
		{
			while(list_.is_empty())
			{
				pop();
			}
		}
	}

	void push(TDATO d)
	{
		list_.insertar_final(d);
		top_++;
	}

	TDATO pop(void)
	{
		int res =0;

		res = list_.extraer_final();

		top_--;
		return res;
	}

	TDATO get_top(void)
	{
		return top_;
	}

	void mostrar_pila()
	{
		if(is_empty()==true)
			cout << "Pila vacia"<<endl;
		else
			list_.mostrar_lista();

	}

	bool is_empty(void)
	{
		if(top_==-1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

  void borrar(void)
  {
    if(is_empty() == true)
    {
      cout << "La lista esta vacia..." << endl;
    }
    else
    {
      while(is_empty() != true)
      {
        pop();
      }
    }
  }
  void borrar_hasta(TDATO d)
  {
    if(is_empty() == true)
    {
      cout << "La pila esta vacia..." << endl;
    }
    else
    {
      TDATO auxiliar = pop();
      while(auxiliar != d)
      {
        auxiliar = pop();
      }
    }
  }

	void borrar_pila(void)
	{
		if(is_empty()==true)
			cout << "Pila vacia"<<endl;
		else
		{
      while(is_empty() == true)
      {
        pop();
      }
		}
	}

};
