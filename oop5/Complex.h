#pragma once
#include "Pair.h"
class Complex : public Pair{
	int real;
	int imaginary;
public:
	/*
	����������� ������
	@param _real - �������������� ����� (�� ��������� 0)
	@param _imaginary - ������ (�� ��������� 0)
	*/
	Complex(int _real=0, int _imaginary=0);
	
	/*
	�������� �������� �������������� �����
	@return - �������������� ����� ���� int
	*/
	int getReal() const;
	/*
	���������� �������� �������������� �����
	@param _real - �������������� �����
	*/
	void setReal(int _real);
	/*
	�������� �������� ������ �����
	@return - ������ ����� ���� int
	*/
	int getImaginary() const;
	/*
	���������� �������� ������ �����
	@param _imaginary - ������ �����
	*/
	void setImaginary(int _imaginary);

	/*
	���������� �����
	@return - ���������� ����������� �����
	*/
	Complex conj();

	/*
	�������� ���� Complex
	@param _pair - ��������� � ���� Complex (��������� �� ������� ����������� ����� Pair)
	@return - ���������� ����� � ���� Complex*
	*/
	Complex* operator+(Pair* _pair) override;

	/*
	�������� ���� Complex
	@param _pair - ���������� ���� Complex (��������� �� ������� ����������� ����� Pair)
	@return - ���������� �������� � ���� Complex*
	*/
	Complex* operator-(Pair* _pair) override;

	/*
	��������� ���� Complex
	@param _pair - ��������� � ���� Complex (��������� �� ������� ����������� ����� Pair)
	@return - ���������� ������������ � ���� Complex*
	*/
	Complex* operator*(Pair* _pair) override;

	/*
	������� ���� Complex
	@param _pair - �������� � ���� Complex (��������� �� ������� ����������� ����� Pair)
	@return - ���������� ������� � ���� Complex*
	*/
	Complex* operator/(Pair* _pair) override;

	/*
	������������
	@param _pair - ��������� ������ Complex (��������� �� ������� ����������� ����� Pair)
	@return - ����������� �������� ���������� �������� _pair
	*/
	Complex* operator=(Pair* _pair) override;

	/*
	��������� "������ ����� �������?"
	@param compared - ������������ Complex
	@return - ���������� ��������� ��������� == (true or false)
	*/
	bool operator==(Complex compared);
};