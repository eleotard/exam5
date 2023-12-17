#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"

class ATarget;
class ASpell;

class BrickWall : public ATarget {
	public:
		BrickWall();
		virtual ~BrickWall();

		ATarget *clone() const;
		
	private:

};