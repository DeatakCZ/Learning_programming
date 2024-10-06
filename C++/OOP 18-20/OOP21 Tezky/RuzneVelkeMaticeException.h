#pragma once
#include <exception>


using namespace std;

class RuzneVelkeMaticeException:public _exception
{
public:
	inline string what();
};


inline string RuzneVelkeMaticeException::what()
{
	return "Error - Ruzne Velke Matice";
}