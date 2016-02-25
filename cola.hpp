
using namespace std;

class cola
{
private:
	lista list_;
	int top_;
public:
	cola()
	{
		list_;
		top_=-1;
	}

	~cola()
	{
		if(list_.is_empty() != true)
		{
			for(int i=0;i<top_+1;i++)
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
		int res = 0;
		res = list_.extraer_inicio();
		top_--;
		return res;
	}

	TDATO get_top(void)
	{
		return top_;
	}

	void mostrar_cola()
	{
		if(is_empty()==true)
		{
			cout << "Cola vacia"<<endl;
		}
		else
		{
			list_.mostrar_lista();
		}
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
		if(is_empty()==true)
    {
			cout << "Cola vacia"<<endl;
    }
    else
		{
			int auxiliar = 0;
      while(is_empty()!=true)
			{
				auxiliar = pop();
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
};
