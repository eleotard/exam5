#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ATarget;
class ASpell;

class Dummy : public ATarget {
	public:
		Dummy();
		virtual ~Dummy();

		Dummy *clone() const;
		
	private:

};