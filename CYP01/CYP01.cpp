// CYP01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

int main()
{
	float x;
	float y;

	int ancho;
	int largo;

	int coordenadaizquierdaX;
	int coordenadaizquierdaY;

	float porcentajeancho;
	float porcentajelargo;

	int coordenadaderechaX;
	int coordenadaderechaY;


	scanf_s("%i", &ancho);

	scanf_s("%i", &largo);

	scanf_s("%f", &x);

	scanf_s("%f", &y);

	scanf_s("%f", &porcentajeancho);

	scanf_s("%f", &porcentajelargo);

	coordenadaizquierdaX = (int)ancho * x;

	coordenadaizquierdaY = (int)largo * y;

	coordenadaderechaX = (int)ancho * porcentajeancho + coordenadaizquierdaX;

	coordenadaderechaY = (int)largo * porcentajelargo + coordenadaizquierdaY;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, largo, x, y, porcentajeancho, porcentajelargo, coordenadaizquierdaX, coordenadaizquierdaY, coordenadaderechaX, coordenadaderechaY);
}