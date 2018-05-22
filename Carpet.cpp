#pragma once
#include "Carpet.h"
#include "Rectangle.h"


class Carpet
{
private:
	double pricePerSqYdl;
	Rectangle size;

public:
	void setPricePerYd(double p);
	void setDimensions(double l, double w);
	double getTotalPrice();
	double setPricePerYd();

};
