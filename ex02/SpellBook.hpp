#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "Polymorph.hpp"
#include <map>

class ASpell;
class ATarget;
class Fwoosh;
class Polymorph;


class SpellBook {
	public:
		SpellBook();
		~SpellBook();
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string sp);
		ASpell	*createSpell(std::string sp);

		
	private:
		SpellBook(SpellBook const& src);
		SpellBook &operator=(SpellBook const& src);
		std::map < std::string, ASpell *> _spellbook;

};