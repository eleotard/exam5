#include "SpellBook.hpp"

SpellBook::SpellBook() {
	
}

SpellBook::~SpellBook() {
	auto it = _spellbook.begin();
	auto ite = _spellbook.end();

	for(; it != ite; it++) {
		delete it->second;
	}
	_spellbook.clear();
}

SpellBook::SpellBook(SpellBook const& src) {
	*this = src;
}


SpellBook &SpellBook::operator=(SpellBook const& src) {
	this->_spellbook = src._spellbook;
	return (*this);
}


void	SpellBook::learnSpell(ASpell *spell) {
	if (spell) {
		std::string name = spell->getName();
		if (_spellbook.find(name) == _spellbook.end()) {
			_spellbook[name] = spell->clone();
		}
	}
}

void	SpellBook::forgetSpell(std::string const& sp) {
	if (_spellbook.find(sp) != _spellbook.end()) {
		delete ((_spellbook.find(sp))->second);
		_spellbook.erase(_spellbook.find(sp));
	}
}

ASpell	*SpellBook::createSpell(std::string const& sp) {
	ASpell *tmp = NULL;

	if (_spellbook.find(sp) != _spellbook.end()) {
		tmp = _spellbook.find(sp)->second;
	}
	return tmp;
}