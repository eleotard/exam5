#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
	
}

TargetGenerator::~TargetGenerator() {
	auto it = _tarbook.begin();
	auto ite = _tarbook.end();

	for(; it != ite; it++) {
		delete it->second;
	}
	_tarbook.clear();
}

TargetGenerator::TargetGenerator(TargetGenerator const& src) {
	*this = src;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const& src) {
	_tarbook = src._tarbook;
	return (*this);
}

void TargetGenerator::learnTargetType(ATarget *target) {
	if (target) {
		if (_tarbook.find(target->getType()) == _tarbook.end()) {
			_tarbook[target->getType()] = target->clone();
		}
	}
}

void TargetGenerator::forgetTargetType(std::string const & tar) {
	if (_tarbook.find(tar) != _tarbook.end()) {
		delete _tarbook.find(tar)->second;
		_tarbook.erase(_tarbook.find(tar));
	}
}

ATarget* TargetGenerator::createTarget(std::string const & tar ) {
	ATarget *tmp = NULL;

	if (_tarbook.find(tar) != _tarbook.end()) {
		tmp = _tarbook.find(tar)->second; 
	}
	return (tmp);
}
