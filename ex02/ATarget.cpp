#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget() {

}

ATarget::~ATarget() {

}

ATarget::ATarget(ATarget const& src) {
	*this = src;
}

ATarget::ATarget(std::string const& type) : _type(type) {

}

ATarget &ATarget::operator=(ATarget const& src) {
	_type = src._type;
	return (*this);
}

std::string const&ATarget::getType() const {
	return _type;

}

void	ATarget::getHitBySpell(ASpell const& src) const {
	std::cout << _type <<  " has been " <<  src.getEffects() << "!" << std::endl;
}


// std::string const&ATarget::getEffects() const {
// 	return _effects;
// }

// void	ATarget::setTitle(std::string const& str) {
// 	_title = str;

// }


