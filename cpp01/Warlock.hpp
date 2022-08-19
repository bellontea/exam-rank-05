#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock 
{
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const &copy);
		Warlock &operator=(Warlock const &copy);

		std::vector<ASpell *> spells;

	public:
		Warlock(const std::string name, const std::string title);
		~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;

		void setTitle(const std::string &title);

		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string name);
		void launchSpell(std::string name, const ATarget &target);

};