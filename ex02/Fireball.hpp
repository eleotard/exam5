#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ATarget;
class ASpell;

class Fireball : public ASpell {
	public:
		Fireball();
		virtual ~Fireball();

		ASpell *clone() const;
		
	private:

};