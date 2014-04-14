/*
 * This file is part of the linuxapi package.
 * Copyright (C) 2011-2014 Mark Veltzer <mark.veltzer@gmail.com>
 *
 * linuxapi is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * linuxapi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with linuxapi. If not, see <http://www.gnu.org/licenses/>.
 */

#include <firstinclude.h>
#include <stdlib.h>	// for EXIT_SUCCESS
#include <iostream>	// for std::cout, std::endl

/*
 * This example shows the decorator pattern implemented in C++.
 */

class Base {
public:
	virtual void act(void) {
		std::cout << "in Base" << std::endl;
	}
};
class Derived1 : public Base {
private:
	Base& base;

public:
	Derived1(Base& ibase) : base(ibase) {
	}
	virtual void act(void) {
		base.act();
		std::cout << "in Derived1" << std::endl;
	}
};
class Derived2 : public Base {
private:
	Base& base;

public:
	Derived2(Base& ibase) : base(ibase) {
	}
	virtual void act(void) {
		base.act();
		std::cout << "in Derived2" << std::endl;
	}
};

int main(int argc, char** argv, char** envp) {
	Base base;
	Derived1 derived1(base);
	Derived2 derived2(derived1);
	derived2.act();
	return EXIT_SUCCESS;
}
