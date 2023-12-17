#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include <map>

class ASpell;
class ATarget; 

class Warlock {
	public:
		Warlock(std::string const& name, std::string const& title);
		~Warlock();
		std::string const&getName() const;
		std::string const&getTitle() const;
		void	setTitle(std::string const& str);

		void introduce() const;
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string sp);
		void	launchSpell(std::string sp, ATarget const& target);

		
	private:
		Warlock();
		Warlock(Warlock const& src);
		Warlock &operator=(Warlock const& src);
		std::string _name;
		std::string _title; 
		std::map<std::string, ASpell *> _spellbook;

};