#include "ATarget.hpp"

ATarget::ATarget()
{

}

ATarget::ATarget(ATarget const &copy)
{
	ATarget::operator=(copy);
}

ATarget &ATarget::operator=(ATarget const &copy)
{
	type = copy->type;
	return(*this);
}

ATarget::ATarget(const std::string type);
{
	this->type = type;
}

virtual ~ATarget()
{

}

const std::string& getType() const
{
	return type;
}

virtual ATarget *clone() const = 0;

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << type << " has been " << spell->getEffects() << "!\n";
}