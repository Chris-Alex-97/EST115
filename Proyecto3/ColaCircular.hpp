#include "ColaLineal.hpp"

class ColaCircular : public ColaLineal
{
	protected:
	int siguiente(int r);
	public:
	ColaCircular();
	void insertar(const TipoDeDato& elemento);
	TipoDeDato quitar();
	void borrarCola();
	TipoDeDato frenteCola();
	bool colaVacia();
	bool colaLlena();
};
