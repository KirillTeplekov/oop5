#pragma once
#include "Pair.h"
#include <iostream>

using namespace std;

class Money : public Pair{
	long long rubles;
	unsigned char kopeiki;
	void kopToRub();
public:
	/*
	 онструктор класса
	@param _rubles - рубли (по умолчанию 0)
	@param _kopeiki - копейки (по умолчанию 0)
	*/
	Money(long long _rubles=0, unsigned char _kopeiki=0);

	/*
	”становить значение рублей
	@param _rubles - рубли
	*/
	void setRubles(long long _rubles);

	/*
	ѕолучить значение рублей
	@return - рубли в виде long long
	*/
	long long getRubles();

	/*
	”становить значение копеек
	@param _kopeiki - копеек
	*/
	void setKopeiki(unsigned char _kopeiki);

	/*
	ѕолучить значение копеек
	@return - копей типа unsigned char
	*/
	unsigned char getKopeiki();

	/*
	—ложение двух Money
	@param _pair - слагаемое в виде Money (указатель на базовый абстрактный класс Pair)
	@return - возвращает сумму в виде Money*
	*/
	Money* operator+(Pair *_pair) override;

	/*
	–азность двух Money
	@param _pair - вычитаемое типа Money (указатель на базовый абстрактный класс Pair)
	@return - возвращает разность в виде Money*
	*/
	Money* operator-(Pair* _pair) override;

	/*
	”множение двух Money
	@param _pair - множитель в виде Money (указатель на базовый абстрактный класс Pair)
	@return - возвращает произведение в виде Money*
	*/
	Money* operator*(Pair* _pair) override;

	/*
	ƒеление двух Money
	@param _pair - делитель в виде Money (указатель на базовый абстрактный класс Pair)
	@return - возвращает частное в виде Money*
	*/
	Money* operator/(Pair* _pair) override;

	/*
	ѕрисваивание
	@param _pair - экземпл€р класса Money (указатель на базовый абстрактный класс Pair)
	@return - присваивает текущему экземпл€ру значени€ _pair
	*/
	Money* operator=(Pair* _pair) override;

	/*
	—равнение "первое больше второго?"
	@param compared - сравниваемое Money
	@return - возвращает результат сравнени€ > (true or false)
	*/
	bool operator>(Money compared);

	/*
	—равнение "первое меньше второго?"
	@param compared - сравниваемое Money
	@return - возвращает результат сравнени€ < (true or false)
	*/
	bool operator<(Money compared);

	/*
	—равнение "первое равно второму?"
	@param compared - сравниваемое Money
	@return - возвращает результат сравнени€ == (true or false)
	*/
	bool operator==(Money compared);

	/*
	¬ывод Money
	@param out - поток вывода
	@param lLong - выводимый Money
	@return - возвращает поток вывода
	*/
	friend std::ostream& operator<<(std::ostream& out, const Money& money);

	/*
	¬ывод Money
	@param in - поток ввода
	@param lLong - Money дл€ которого ввод€тс€ значени
	@return - возвращает поток ввода
	friend std::istream& operator>>(std::istream& in, Money& Money);
	*/
};
