#include <iostream>
#include "Vector2.h";
#include "Vector3.h";
#include "Matrix2.h";
#include "Math.h";
#include "Spline.h";
#include <cstdarg>

void main()
{
	Silcoish::Vector3<float> a = Silcoish::Vector3<float>(1.2f, 2.2f, 6.2f);
	Silcoish::Vector3<float> b = Silcoish::Vector3<float>(20.0f, 2.0f, 3.0f);
	Silcoish::Vector2<float> c = Silcoish::Vector2<float>(10.3f, 40.2f);
	Silcoish::Vector2<float> d = Silcoish::Vector2<float>(133.9f, 66.8f);

	std::cout << a + b;

	std::cout << a << std::endl;
	std::cout << c << std::endl;

	Silcoish::Matrix2<3, 3, float> *e = new Silcoish::Matrix2<3, 3, float>();
	e->Set(1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9);
	
	std::cout << Silcoish::SCurve(0.1);
	std::cout << Silcoish::SCurve(0.2);
	std::cout << Silcoish::SCurve(0.3);
	std::cout << Silcoish::SCurve(0.4);
	std::cout << Silcoish::SCurve(0.5);
	std::cout << Silcoish::SCurve(0.6);
	std::cout << Silcoish::SCurve(0.7);
	std::cout << Silcoish::SCurve(0.8);
	std::cout << Silcoish::SCurve(0.9);
	std::cout << Silcoish::SCurve(1.0);

	std::cin.ignore();

}