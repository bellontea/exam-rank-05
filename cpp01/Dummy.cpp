#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{
}

~Dummy()
{
}
	
virtual ATarget *clone() const
{
	return (new Dummy());
}