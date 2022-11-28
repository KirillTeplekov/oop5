#include "Complex.h"

Complex::Complex(int _real, int _imaginary) : real(_real), imaginary(_imaginary) {}

int Complex::getReal() const
{
	return real;
}

void Complex::setReal(int _real)
{
	real = _real;
}

int Complex::getImaginary() const
{
	return imaginary;
}

void Complex::setImaginary(int _imaginary)
{
	imaginary = _imaginary;
}

Complex Complex::conj()
{
	return Complex(real, -imaginary);
}

Complex* Complex::operator+(Pair* _pair)
{
	Complex* other = dynamic_cast<Complex*>(_pair);
	if (other)
		return new Complex(real + other->real, imaginary + other->real);
}

Complex* Complex::operator-(Pair* _pair)
{
	Complex* other = dynamic_cast<Complex*>(_pair);
	if (other)
		return new Complex(real - other->real, imaginary - other->real);
}

Complex* Complex::operator*(Pair* _pair)
{
	Complex* other = dynamic_cast<Complex*>(_pair);
	if (other)
		return new Complex(real * other->real - imaginary * other->real, real * other->imaginary + imaginary * other->real );
}

Complex* Complex::operator/(Pair* _pair)
{
	Complex* other = dynamic_cast<Complex*>(_pair);
	if (other) {
		int _real = (real * other->real + imaginary * other->imaginary) / (other->real * other->real + other->imaginary * other->imaginary);
		int _imaginary = (real * other->real - imaginary * other->imaginary) / (other->real * other->real + other->imaginary * other->imaginary);
		return new Complex(_real, _imaginary);
	}
}

Complex* Complex::operator=(Pair* _pair)
{
	Complex* other = dynamic_cast<Complex*>(_pair);
	if (other) {
		real = other->real;
		imaginary = other->imaginary;
		return this;
	}
}

bool Complex::operator==(Complex compared)
{
	return real == compared.real && imaginary == compared.imaginary;;
}

