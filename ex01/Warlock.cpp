#include "Warlock.hpp"

Warlock::Warlock() {

}

Warlock::~Warlock() {
	std::cout << this->_name <<  ": My job here is done!" << std::endl;
}

Warlock::Warlock(Warlock const& src) {

}

Warlock::Warlock(std::string const& name, std::string const& title) : _name(name), _title(title) {
	std::cout << this->_name <<  ": This looks like another boring day." << std::endl;
}

Warlock &Warlock::operator=(Warlock const& src) {
	
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
		this->_spellbook[spell->getName()] = spell;
	}
}

// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
void	Warlock::forgetSpell(std::string sp) {
	if (_spellbook.find(sp) != _spellbook.end()) {
		_spellbook.erase(_spellbook.find(sp));
	}
}

// launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.
void	Warlock::launchSpell(std::string sp, ATarget const& target) {
	if (_spellbook.find(sp) != _spellbook.end()) {
			_spellbook[sp]->launch(target);
	}
}