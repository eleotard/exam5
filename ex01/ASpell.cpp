#include "ASpell.hpp"

ASpell::ASpell() {

}

ASpell::~ASpell() {

}

ASpell::ASpell(ASpell const& src) {

}

ASpell::ASpell(std::string const& name, std::string const& effects) : _name(name), _effects(effects) {

}

ASpell &ASpell::operator=(ASpell const& src) {
	
	return (*this);
}

std::string const&ASpell::getName() const {
	return _name;

}
std::string const&ASpell::getEffects() const {
	return _effects;
}

void	ASpell::launch(ATarget const& tar) {
	tar.getHitBySpell(*this);
}




