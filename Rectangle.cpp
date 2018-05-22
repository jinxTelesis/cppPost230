#pragma once
#include "Rectangle.h"
using namespace std;


void Rectangle::setLength(double len) {
	this->length = len;
}

void Rectangle::setWidth(double wid)
{
	this->width = wid;
}

double Rectangle::getLength()
{
	return this->length;
}

double Rectangle::getWidth()
{
	return this->width;
}

double Rectangle::calcArea()
{
	return this->length * this->width;
}
