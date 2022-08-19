#include "Warlock.hpp"

Warlock::Warlock(const std::string name, const std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const 
{
	return name;
}

const std::string& Warlock::getTitle() const
{
	return title;
}

void Warlock::setTitle(const std::string &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void learnSpell(ASpell *spell)
{
	if(spell)
		spells.push_back(spell->clone());
}

void forgetSpell(std::string name)
{
	vector<ASpell *>::iterator itr = std::find_if(spells.begin(), spells.end(),
										[name](ASpell *item){return item->getName() == name;});
	if (itr != spells.end())
		spells.erase(itr);
}
void launchSpell(std::string name, const ATarget &target);