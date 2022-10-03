#pragma once

#include <iostream>
#include <string>
#include "Base.hpp"

class B : public Base
{
private:
public:
	// Coplien //
	B();
	B(const B &cpy);
	~B();
	B &operator=(const B &rhs);
	// Assignation contructors //
	// Operators //
	// Getters //
	// Setters //
	// Methods //
	// Exceptions //
};
