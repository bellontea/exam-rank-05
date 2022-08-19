#pragma once
#include "ASpell.hpp"

class ATarget 
{
	private:
		std::string type;

	public:
		ATarget();
		ATarget(ATarget const &copy);
		ATarget &operator=(ATarget const &copy);
		ATarget(const std::string type);
		virtual ~ATarget();

		const std::string& getType() const;

		virtual ATarget *clone() const = 0;

		void getHitBySpell(const ASpell &spell) const;

};