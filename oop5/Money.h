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
	����������� ������
	@param _rubles - ����� (�� ��������� 0)
	@param _kopeiki - ������� (�� ��������� 0)
	*/
	Money(long long _rubles=0, unsigned char _kopeiki=0);

	/*
	���������� �������� ������
	@param _rubles - �����
	*/
	void setRubles(long long _rubles);

	/*
	�������� �������� ������
	@return - ����� � ���� long long
	*/
	long long getRubles();

	/*
	���������� �������� ������
	@param _kopeiki - ������
	*/
	void setKopeiki(unsigned char _kopeiki);

	/*
	�������� �������� ������
	@return - ����� ���� unsigned char
	*/
	unsigned char getKopeiki();

	/*
	�������� ���� Money
	@param _pair - ��������� � ���� Money (��������� �� ������� ����������� ����� Pair)
	@return - ���������� ����� � ���� Money*
	*/
	Money* operator+(Pair *_pair) override;

	/*
	�������� ���� Money
	@param _pair - ���������� ���� Money (��������� �� ������� ����������� ����� Pair)
	@return - ���������� �������� � ���� Money*
	*/
	Money* operator-(Pair* _pair) override;

	/*
	��������� ���� Money
	@param _pair - ��������� � ���� Money (��������� �� ������� ����������� ����� Pair)
	@return - ���������� ������������ � ���� Money*
	*/
	Money* operator*(Pair* _pair) override;

	/*
	������� ���� Money
	@param _pair - �������� � ���� Money (��������� �� ������� ����������� ����� Pair)
	@return - ���������� ������� � ���� Money*
	*/
	Money* operator/(Pair* _pair) override;

	/*
	������������
	@param _pair - ��������� ������ Money (��������� �� ������� ����������� ����� Pair)
	@return - ����������� �������� ���������� �������� _pair
	*/
	Money* operator=(Pair* _pair) override;

	/*
	��������� "������ ������ �������?"
	@param compared - ������������ Money
	@return - ���������� ��������� ��������� > (true or false)
	*/
	bool operator>(Money compared);

	/*
	��������� "������ ������ �������?"
	@param compared - ������������ Money
	@return - ���������� ��������� ��������� < (true or false)
	*/
	bool operator<(Money compared);

	/*
	��������� "������ ����� �������?"
	@param compared - ������������ Money
	@return - ���������� ��������� ��������� == (true or false)
	*/
	bool operator==(Money compared);

	/*
	����� Money
	@param out - ����� ������
	@param lLong - ��������� Money
	@return - ���������� ����� ������
	*/
	friend std::ostream& operator<<(std::ostream& out, const Money& money);

	/*
	����� Money
	@param in - ����� �����
	@param lLong - Money ��� �������� �������� �������
	@return - ���������� ����� �����
	friend std::istream& operator>>(std::istream& in, Money& Money);
	*/
};
