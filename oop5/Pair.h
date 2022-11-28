#pragma once
class Pair
{
public:
	virtual ~Pair() {};

	virtual Pair* operator+(Pair* _pair) = 0;
	virtual Pair* operator-(Pair* _pair) = 0;
	virtual Pair* operator*(Pair* _pair) = 0;
	virtual Pair* operator/(Pair* _pair) = 0;
	virtual Pair* operator=(Pair* _pair) = 0;
};

