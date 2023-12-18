#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "SpellBook.hpp"
#include <map>
#include "Polymorph.hpp"
#include "BrickWall.hpp"
#include "Fireball.hpp"
#include "TargetGenerator.hpp"

class ASpell;
class ATarget;
class SpellBook;

class Warlock {
	public:
		Warlock(std::string const& name, std::string const& title);
		~Warlock();
		std::string const&getName() const;
		std::string const&getTitle() const;
		void	setTitle(std::string const& str);

		void introduce() const;
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string const& sp);
		void	launchSpell(std::string const& sp, ATarget const& target);

		
	private:
		Warlock();
		Warlock(Warlock const& src);
		Warlock &operator=(Warlock const& src);
		std::string _name;
		std::string _title; 
		SpellBook _SB;
};