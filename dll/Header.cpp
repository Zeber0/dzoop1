#include "Header.h"

Kladovshikov::Kladovshikov()
{
	a = new int;
	*a = 1;
}

Kladovshikov::~Kladovshikov()
{
	delete a;
}

std::string Kladovshikov::out()
{
	return std::to_string(*a);
}

Dmitry::Dmitry()
{
	b = new std::string;
	*b = "Dima";
}

Dmitry::~Dmitry()
{
	delete b;
}

std::string Dmitry::out()
{
	return *b;
}
