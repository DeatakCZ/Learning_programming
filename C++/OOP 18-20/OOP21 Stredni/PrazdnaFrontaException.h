#pragma once
#include <exception>
#include <iostream>
#include <string>
using namespace std;

class PrazdnaFrontaException : public _exception
{
public:
	string what();
};

string PrazdnaFrontaException::what()
{
	return "Prazdna fronta";
}