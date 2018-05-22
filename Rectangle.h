#pragma once
class Rectangle {

private:
	double length;
	double width;
public:
	void setLength(double);
	void setWidth(double);
	double getLength();
	double getWidth();
	double calcArea();

};
