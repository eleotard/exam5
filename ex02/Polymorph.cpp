#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter"){

}

Polymorph::~Polymorph() {
}


ASpell *Polymorph::clone() const {
	
	std::cout << "testttt" << std::endl;
	return (new Polymorph());
}

