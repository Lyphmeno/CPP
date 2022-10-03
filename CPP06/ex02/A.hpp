#pragma once

#include <iostream>
#include <string>
#include "Base.hpp"

class A : public Base
{
private:
public:
	// Coplien //
	A();
	A(const A &cpy);
	~A();
	A &operator=(const A &rhs);
	// Assignation contructors //
	// Operators //
	// Getters //
	// Setters //
	// Methods //
	// Exceptions //
};
