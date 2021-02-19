#pragma once
#include <string>
#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif
class DLL_API  Kladovshikov
{
public:
	int* a;
	Kladovshikov();
	virtual ~Kladovshikov();
	virtual std::string out();
};

class DLL_API Dmitry : public Kladovshikov
{
public:
	std::string* b;
	Dmitry();
	~Dmitry();
	std::string out();
};