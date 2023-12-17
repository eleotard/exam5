
#include "Warlock.hpp"

int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  ASpell* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}
