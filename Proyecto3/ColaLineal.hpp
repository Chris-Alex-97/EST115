typedef int TipoDeDato;
const int MAXTAMQ = 39;
class ColaLineal{
	protected:
	int frente;
	int final;
	TipoDeDato listaCola[MAXTAMQ];
	public:
	ColaLineal();
	void insertar(const TipoDeDato& elemento);
	TipoDeDato quitar();
	void borrarCola();
	TipoDeDato frenteCola();
	bool colaVacia();
	bool colaLlena();	
};
