#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	public:
		ASpell(std::string const& name, std::string const& title);
		virtual ~ASpell();
		std::string const&getName() const;
		std::string const&getEffects() const;
		virtual ASpell *clone() const = 0;

		void	launch(ATarget const& tar);
		
	private:
		ASpell();
		ASpell(ASpell const& src);
		ASpell &operator=(ASpell const& src);
		std::string _name;
		std::string _effects; 

};