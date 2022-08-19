#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{
}

~Fwoosh()
{
}
	
virtual ASpell *clone() const
{
	return (new Fwoosh());
}