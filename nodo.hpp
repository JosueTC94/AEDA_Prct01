typedef int TDATO;

using namespace std;

class nodo
{
private:
  TDATO dato;
  nodo* siguiente;
public:
  nodo();
  ~nodo();
  nodo(TDATO d);
  nodo(TDATO d, nodo* sig);
  TDATO get_dato(void);
  void set_dato(TDATO d);
  void set_siguiente(nodo* next);
  nodo* get_siguiente(void);
};
