#pragma once

#include <string>
#include <iostream>

class Warlock{

	public:
		Warlock(const std::string &,const std::string &);
		~Warlock();
		const std::string getName() const;
		const std::string getTitle() const;
		void setTitle(const std::string &);
		void introduce() const;
		void learnSpell(ASpell *);
		void forgetSpell(const std::string &);
		void launchSpell(const std::string &, const ATarget &);
	private:
		std::vector<ASpell *> spells;
		std::string name;
		std::string title;
		Warlock();
		Warlock(const Warlock &);
		Warlock& operator=(const Warlock &);
};
