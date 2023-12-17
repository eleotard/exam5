#include "Warlock.hpp"
#include <map>

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
//  BrickWall model1;

  //Polymorph* polymorph = new Polymorph();
  //TargetGenerator tarGen;
//  std::cout << "test2" << std::endl;

  //tarGen.learnTargetType(&model1);
  //richard.learnSpell(polymorph);
  //std::cout << "test" << std::endl;
  std::map<std::string, ASpell *> m;
  m["lol"] = NULL;
  std::cout << "tdfsdfds" << std::endl;

  ASpell* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

//  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  //richard.introduce();
  // richard.launchSpell("Polymorph", *wall);
  // richard.launchSpell("Fireball", *wall);
}
