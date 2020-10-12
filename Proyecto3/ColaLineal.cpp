#include "ColaLineal.hpp"

ColaLineal :: ColaLineal()
{
	frente = 0;
	final = -1;
}

void ColaLineal :: insertar(const TipoDeDato& elemento)
{
	if(!colaLlena())
	{
		listaCola[++final] = elemento;		
	}
	else
		throw "Overflow en la cola";
}

TipoDeDato ColaLineal :: quitar()
{
	if(!colaVacia())
	{
		return listaCola[frente++];
	}
	else
		throw "Cola vacia";
}

void ColaLineal :: borrarCola()
{
	frente = 0;
	final = -1;
}

TipoDeDato ColaLineal :: frenteCola()
{
	if(!colaVacia())
	{
		return listaCola[frente];
	}
	else
		throw "Cola vacia";
}

bool ColaLineal :: colaVacia()
{
	return frente > final;
}

bool ColaLineal :: colaLlena()
{
	return final == MAXTAMQ - 1;
}
