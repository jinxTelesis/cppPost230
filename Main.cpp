#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
#include <cmath>
#include <ctime>
#include <memory>
#include "Carpet.h"
#include "Rectangle.h"


using namespace std;

int main() {
	
	Carpet purchase;
	double pricePerYd;
	double length = 10;
	double width = 10;


	purchase.setDimensions(length, width);
	purchase.setPricePerYd(purchase.setPricePerYd());

	system("pause");
	return 0;
}
