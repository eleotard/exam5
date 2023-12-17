#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ATarget;
class ASpell;

class Fwoosh : public ASpell {
	public:
		Fwoosh();
		virtual ~Fwoosh();

		ASpell *clone() const;
		
	private:

};