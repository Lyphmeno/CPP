#pragma once

#include <iostream>
#include <string>
#define LOG 0

class Base
{
private:
public:
	virtual ~Base() = 0;
};

class A: class Base {};

class B: class Base {};

class C: class Base {};

Base *generate(void);

void identify(Base *p);

void identify(Base &p);