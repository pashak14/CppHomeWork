// ��������� ���� String, ���� � ���������� ���� ����������������� ��� ������ � �������.���� ������� ������ :
// � ����������� �� �������������, �� �������� �������� ����� �������� 80 �������;
// � �����������, �� �������� ���������� ����� ��������� ������;
// � �����������, ���� ������� ����� � ��������� �� ������, �������� �� �����������.
// � ��������� �������� ����������.
// � ���� ������� ������ ������ ��� �������� ����� � ��������� � ��������� ����� �� �����.
// 
// � ���� String ������� ��������������[], ()
// [] - ������� ������� �� �������� �������;
// () - ���� ������ � �����, ���� ������ � ������� ������, ���� ���� - 1.
// 
// 
// ��������� �������� �����������.���� ������� ���������� ������� ����� �� �������.����� ������ ������������ ����������.
// ��������� �������� ����������.���� ������� ���������� ������� ����� �� �������.

#include "myString.h"
#include <iostream>
#include <string>

using namespace std;

myString::myString() {
	this->str = new char[80];
}

myString::myString( int sizeStr ) {
	this->str = new char[sizeStr];
}

myString::myString( char str2[] ) {
	this->str = new char[strlen( str2 )];
	this->str = str2;
}

myString::~myString() {
	delete[] str; // ???? ERROR | I don't have idea to fix this bug (
}

void myString::cinS() {
	cin >> this->str;
}

void myString::coutS() {
	cout << this->str;
}

char myString::operator[]( int index ) {
	cout << endl;
	for (int i = 0; i < strlen( str ); i++ ) {
		if (i == index-1) {
			return this->str[i];
		}
	}

	return 0;
}

int myString::operator()( char symbol ) {
	cout << endl;
	for (int i = 0; i < strlen( str ); i++) {
		if (this->str[i] == symbol) {
			return i;
		}
	}

	return -1;
}

void myString::operator++( int i ) {
	int temp = strlen( this->str );
	this->str[strlen( this->str )] = '|';
	this->str[temp + 1] = 0;
}

void myString::operator--( int i ) {
	this->str[strlen( this->str ) - 1] = 0;
}
