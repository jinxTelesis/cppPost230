#pragma once
#include "Rectangle.h"
#include "Carpet.h"
#include <iostream>

using namespace std;

void Carpet::setPricePerYd(double p)
{
	this->pricePerSqYdl = p;
}

double Carpet::setPricePerYd()
{
	return this->pricePerSqYdl;
}

void Carpet::setDimensions(double len, double wid)
{
	size.setLength(len / 3);
	size.setWidth(wid / 3);
}

double Carpet::getTotalPrice()
{
	return (size.calcArea() * pricePerSqYdl);
}
