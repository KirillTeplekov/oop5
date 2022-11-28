#include "Money.h"

using namespace std;

void Money::kopToRub() {
	rubles = rubles + kopeiki / 100;
	kopeiki %= 100;
}

Money* PairToMoney(Pair* _pair) {
	return dynamic_cast<Money*>(_pair);
}
 
Money::Money(long long _rubles, unsigned char _kopeiki) : rubles(_rubles), kopeiki(_kopeiki) {
	kopToRub();
}

void Money::setRubles(long long _rubles) {
	rubles = _rubles;
}

long long Money::getRubles()
{
	return rubles;
}

void Money::setKopeiki(unsigned char _kopeiki)
{
	kopeiki = _kopeiki;
}

unsigned char Money::getKopeiki()
{
	return kopeiki;
}

Money* Money::operator+(Pair* _pair)
{
	Money* other = dynamic_cast<Money*>(_pair);
	if (other) {
		return new Money(rubles + other->rubles, kopeiki + other->kopeiki);
	}
}

Money* Money::operator-(Pair* _pair)
{
	Money* other = dynamic_cast<Money*>(_pair);
	if (other) {
		long long _rubles = rubles;
		unsigned char _kopeiki = kopeiki;
		if (other->kopeiki > kopeiki) {
			_kopeiki = 100 - (other->kopeiki - kopeiki);
		}
		else
			_kopeiki -= other->kopeiki;
		return new Money(_rubles, _kopeiki);
	}
	return new Money();
}

Money* Money::operator*(Pair* _pair)
{
	Money* other = dynamic_cast<Money*>(_pair);
	if (other) {
		long long temp = rubles * other->kopeiki + other->rubles * kopeiki + kopeiki * other->kopeiki;
		long long _rubles = rubles * other->rubles + temp/100;
		unsigned char _kopeiki = temp % 100;
		
		return new Money(_rubles, _kopeiki);
	}
}

Money* Money::operator/(Pair* _pair)
{
	Money* other = dynamic_cast<Money*>(_pair);
	if (other) {
		long long temp = kopeiki / other->rubles;
		long long _rubles = rubles/other->rubles+kopeiki/other->kopeiki+(rubles/other->kopeiki)*100+temp/100;
		unsigned char _kopeiki = temp%100;
		return new Money(_rubles, _kopeiki);
	}
}

Money* Money::operator=(Pair* _pair)
{
	Money* other = dynamic_cast<Money*>(_pair);
	if (other) {
		rubles = other->rubles;
		kopeiki = other->kopeiki;
		return this;
	}
}

bool Money::operator>(Money compared) {
	if (rubles != compared.rubles)
		return rubles > compared.rubles;
	else
		return kopeiki > compared.kopeiki;
}
bool Money::operator<(Money compared) {
	if (rubles != compared.rubles)
		return rubles < compared.rubles;
	else
		return kopeiki < compared.kopeiki;
}
bool Money::operator==(Money compared) {
	return (rubles == compared.rubles && kopeiki == compared.kopeiki);
}

std::ostream& operator<<(std::ostream& out, const Money& money)
{
	out << money.rubles << "," << money.kopeiki;
	return out;
}
