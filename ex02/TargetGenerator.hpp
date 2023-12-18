#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "SpellBook.hpp"
#include <map>

class ASpell;
class ATarget;
class SpellBook;

class TargetGenerator {
	public:
		TargetGenerator();
		~TargetGenerator();
		
		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);

		
	private:
		TargetGenerator(TargetGenerator const& src);
		TargetGenerator &operator=(TargetGenerator const& src);
		std::map<std::string, ATarget *> _tarbook;
		
};