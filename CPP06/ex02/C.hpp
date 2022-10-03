#pragma once

#include <iostream>
#include <string>
#include "Base.hpp"

class C : public Base
{
private:
public:
	// Coplien //
	C();
	C(const C &cpy);
	~C();
	C &operator=(const C &rhs);
	// Assignation contructors //
	// Operators //
	// Getters //
	// Setters //
	// Methods //
	// Exceptions //
};
