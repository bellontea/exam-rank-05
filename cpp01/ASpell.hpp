#pragma once
#include <iostream>

class ASpell 
{
	private:
		std::string name;
		std::string effects;

	public:
		ASpell();
		ASpell(ASpell const &copy);
		ASpell &operator=(ASpell const &copy);
		ASpell(const std::string name, const std::string effects);
		virtual ~ASpell();

		const std::string& getName() const;
		const std::string& getEffects() const;

		virtual ASpell *clone() const = 0;

		void launch(const ATarget &target) const;

};