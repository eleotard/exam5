#include "Warlock.hpp"

Warlock::Warlock() {
	//_SB = new SpellBook();
}

Warlock::~Warlock() {
	std::cout << this->_name <<  ": My job here is done!" << std::endl;
	//delete _SB;
}

Warlock::Warlock(Warlock const& src) {
	*this = src;
}

Warlock::Warlock(std::string const& name, std::string const& title) : _name(name), _title(title) {
	std::cout << this->_name <<  ": This looks like another boring day." << std::endl;
}

Warlock &Warlock::operator=(Warlock const& src) {
	_name = src._name;
	_title = src._title;
	return (*this);
}

std::string const&Warlock::getName() const {
	return _name;

}
std::string const&Warlock::getTitle() const {
	return _title;
}

void	Warlock::setTitle(std::string const& str) {
	_title = str;

}

void Warlock::introduce() const {
	std::cout << this->_name << ": I am " << this->_name <<  ", " << _title  << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell) {
	if (spell) {
		_SB->learnSpell(spell);
	}
}

void	Warlock::forgetSpell(std::string sp) {
	_SB->forgetSpell(sp);
}

void	Warlock::launchSpell(std::string sp, ATarget const& target) {
	ASpell *spell = _SB->createSpell(sp);
	if (spell) {
		spell->launch(target);
	}
}