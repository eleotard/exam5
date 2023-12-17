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