#include "ColaCircular.hpp"

int ColaCircular :: siguiente(int r)
{
	return (r+1) % MAXTAMQ;
}

ColaCircular :: ColaCircular()
{
	frente = 0;
	final = MAXTAMQ-1;
}

void ColaCircular :: insertar(const TipoDeDato& elemento)
{
	if(!colaLlena())
	{
		final = siguiente(final);
		listaCola[final] = elemento;
	}
	else 
		throw "Overflow en la cola";
}

TipoDeDato ColaCircular :: quitar()
{
	if(!colaVacia())
	{
		TipoDeDato tm = listaCola[frente];
		frente = siguiente(frente);
		return tm;
	}
	else
		throw "Cola vacia";
}

void ColaCircular :: borrarCola()
{
	frente = 0;
	final = MAXTAMQ-1;
}

TipoDeDato ColaCircular :: frenteCola()
{
	if(!colaVacia())
	{
		return listaCola[frente];
	}
	else
		throw "Cola vacia";
}

bool ColaCircular :: colaVacia()
{
	return frente == siguiente(final);
}

bool ColaCircular :: colaLlena()
{
	return frente == siguiente(siguiente(final));
}
