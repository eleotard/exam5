#include "SpellBook.hpp"

SpellBook::SpellBook() {
	std::map<std::string, ASpell *> _spellbook;
	this->_spellbook = _spellbook;
}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell *>::iterator it;
	std::map<std::string, ASpell *>::iterator ite = _spellbook.end();

	for (it = _spellbook.begin(); it != ite; it++) {
		delete it->second;
	}
	_spellbook.clear();

}

SpellBook::SpellBook(SpellBook const& src) {
	*this = src;
}

SpellBook &SpellBook::operator=(SpellBook const& src) {
	_spellbook = src._spellbook;
	return (*this);
}


void	SpellBook::learnSpell(ASpell *spell) {
	if (spell) {
		
		// spell->clone();
		// std::map<std::string, ASpell *>::iterator it = _spellbook.begin();

		// std::cout << it->first << std::endl;
		if (_spellbook.find(spell->getName()) == _spellbook.end()) {
			std::map<std::string, ASpell *>::iterator it = _spellbook.begin();

			std::cout << "test3" << std::endl;
			std::string name = spell->getName();
			std::cout << name << std::endl;
			std::map<std::string, ASpell *> lol;
			std::map<std::string, ASpell *>::iterator it_lol = lol.begin();
			lol.insert(it_lol, {spell->getName(), spell->clone()});
			_spellbook.insert(it, {"lol", NULL});
			
			std::cout << "test4" << std::endl;
		}
	}
}

// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   SpellBook forget it. If it's not a known spell, does nothing.
void	SpellBook::forgetSpell(std::string sp) {
	if (_spellbook.find(sp) != _spellbook.end()) {
		delete ((_spellbook.find(sp))->second);
		_spellbook.erase(_spellbook.find(sp));
	}
}

ASpell	*SpellBook::createSpell(std::string sp) {
	ASpell *tmp = NULL;

	if (_spellbook.find(sp) != _spellbook.end()) {
		tmp = _spellbook[sp];
	}
	return tmp;
}