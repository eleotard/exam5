#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ATarget;
class ASpell;

class Polymorph : public ASpell {
	public:
		Polymorph();
		virtual ~Polymorph();

		ASpell *clone() const;
		
	private:

};