#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell()
{

}

ASpell::ASpell(ASpell const &copy)
{
	ASpell::operator=(copy);
}

ASpell& ASpell::operator=(ASpell const &copy)
{
	name = copy->name;
	effects = copy->effects;
	return(*this);
}

ASpell::ASpell(const std::string name, const std::string effects)
{
	this->name = name;
	this->effects = effects;
}

virtual ASpell::~ASpell()
{

}

const std::string& ASpell::getName() const
{
	return name;
}


const std::string& ASpell::getEffects() const
{
	return effects;
}

void ASpell::launch(const ATarget &target) const
{
	target->getHitBySpell(*this);
}