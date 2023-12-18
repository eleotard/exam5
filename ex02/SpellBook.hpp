#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include <map>

class ASpell;
class ATarget; 

class SpellBook {
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string const& sp);
		ASpell	*createSpell(std::string const& sp);

		
	private:
		SpellBook(SpellBook const& src);
		SpellBook &operator=(SpellBook const& src);
		std::map<std::string, ASpell *> _spellbook;
};