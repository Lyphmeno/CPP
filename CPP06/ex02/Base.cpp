#include "Base.hpp"

Base *generate(void)
{
	Base *ptr;
	int i;

	i = rand() % 3;
	switch (i)
	{
	case 0:
		ptr = new (A);
		break;
	case 1:
		ptr = new (B);
		break;
	case 2:
		ptr = new (C);
		break;
	}
	return (ptr);
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	A a;
	B b;
	C c;

	try
	{
		a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception &e)
	{
		try
		{
			b = dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::exception &e)
		{
			try
			{
				c = dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::exception &e)
			{
			}
		}
	}
}