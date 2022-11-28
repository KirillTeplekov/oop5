#pragma once
#include "Pair.h"
class Complex : public Pair{
	int real;
	int imaginary;
public:
	/*
	 онструктор класса
	@param _real - действительна€ часть (по умолчанию 0)
	@param _imaginary - мнима€ (по умолчанию 0)
	*/
	Complex(int _real=0, int _imaginary=0);
	
	/*
	ѕолучить значение действительной части
	@return - действительна€ часть типа int
	*/
	int getReal() const;
	/*
	”становить значение действительной части
	@param _real - действительна€ часть
	*/
	void setReal(int _real);
	/*
	ѕолучить значение мнимой части
	@return - мнима€ часть типа int
	*/
	int getImaginary() const;
	/*
	”становить значение мнимой части
	@param _imaginary - мнима€ часть
	*/
	void setImaginary(int _imaginary);

	/*
	—опр€жение числа
	@return - возвращает сопр€женное число
	*/
	Complex conj();

	/*
	—ложение двух Complex
	@param _pair - слагаемое в виде Complex (указатель на базовый абстрактный класс Pair)
	@return - возвращает сумму в виде Complex*
	*/
	Complex* operator+(Pair* _pair) override;

	/*
	–азность двух Complex
	@param _pair - вычитаемое типа Complex (указатель на базовый абстрактный класс Pair)
	@return - возвращает разность в виде Complex*
	*/
	Complex* operator-(Pair* _pair) override;

	/*
	”множение двух Complex
	@param _pair - множитель в виде Complex (указатель на базовый абстрактный класс Pair)
	@return - возвращает произведение в виде Complex*
	*/
	Complex* operator*(Pair* _pair) override;

	/*
	ƒеление двух Complex
	@param _pair - делитель в виде Complex (указатель на базовый абстрактный класс Pair)
	@return - возвращает частное в виде Complex*
	*/
	Complex* operator/(Pair* _pair) override;

	/*
	ѕрисваивание
	@param _pair - экземпл€р класса Complex (указатель на базовый абстрактный класс Pair)
	@return - присваивает текущему экземпл€ру значени€ _pair
	*/
	Complex* operator=(Pair* _pair) override;

	/*
	—равнение "первое равно второму?"
	@param compared - сравниваемое Complex
	@return - возвращает результат сравнени€ == (true or false)
	*/
	bool operator==(Complex compared);
};